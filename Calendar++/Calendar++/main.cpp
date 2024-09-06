#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <msclr\marshal_cppstd.h>
#include "CalendarMain1.h"

using namespace System;
using namespace System::Net;
using namespace System::Net::Sockets;
using namespace System::Text;
using namespace msclr::interop;
using namespace Calendar;

void ConnectCallback(IAsyncResult^ ar)
{
    Socket^ clientSocket = dynamic_cast<Socket^>(ar->AsyncState);
    clientSocket->EndConnect(ar);
}

void ReceiveCallback(IAsyncResult^ ar)
{
    Socket^ clientSocket = dynamic_cast<Socket^>(ar->AsyncState);
    int bytesRead = clientSocket->EndReceive(ar);

    // �������� ������
    clientSocket->Shutdown(SocketShutdown::Both);
    clientSocket->Close();
}

std::string ReadFileContent(const std::string& filePath)
{
    std::ifstream file(filePath);
    if (!file.is_open())
    {
        std::cerr << "������ �������� �����: " << filePath << std::endl;
        throw std::runtime_error("������ �������� �����");
    }

    std::string content;
    std::getline(file, content);
    file.close();
    return content;
}

int main(array<String^>^ args)
{
    // ������������� Winsock
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        std::cerr << "������ ������������� Winsock." << std::endl;
        return 1;
    }

    // ������ IP-������ � ����� �� ������
    std::string serverIP, serverPortStr;
    try
    {
        serverIP = ReadFileContent("aipi.txt");
        serverPortStr = ReadFileContent("port.txt");
    }
    catch (const std::exception& e)
    {
        std::cerr << "������ ������ ������������: " << e.what() << std::endl;
        return 1;
    }

    // �������������� ������ ����� � ����� �����
    int serverPort = std::stoi(serverPortStr);

    // �������� ������
    Socket^ clientSocket = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::Tcp);

    // �������� ����������� �������
    try
    {
        IPAddress^ ipAddress = IPAddress::Parse(gcnew String(serverIP.c_str()));
        IPEndPoint^ ipEndPoint = gcnew IPEndPoint(ipAddress, serverPort);

        // ������� ����������� � �������� ���������
        clientSocket->Connect(ipEndPoint);

        // ��������� IP-������ �������
        String^ localIP = Dns::GetHostByName(Dns::GetHostName())->AddressList[0]->ToString();

        // �������� IP-������ �� ������
        array<Byte>^ sendData = Encoding::UTF8->GetBytes(localIP);
        clientSocket->Send(sendData);

        // ����������� ����� ������ �� �������
        array<Byte>^ receiveData = gcnew array<Byte>(256); // ��������� ������ � �����
        clientSocket->BeginReceive(receiveData, 0, receiveData->Length, SocketFlags::None, gcnew AsyncCallback(&ReceiveCallback), clientSocket);
    }
    catch (SocketException^ se)
    {
        // ����� ��������� �� ������
        std::cerr << "������ ����������� � �������: " << marshal_as<std::string>(se->Message) << std::endl;
        MessageBox::Show("��������, �� ������ ������ ������ ��������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return 1;
    }
    catch (Exception^ e)
    {
        std::cerr << "����� ������: " << marshal_as<std::string>(e->Message) << std::endl;
        return 1;
    }

    // ������������� � ����������� ��������� ����
    try
    {
        CalendarMain^ mainForm = gcnew CalendarMain(clientSocket);
        mainForm->ShowDialog();
    }
    catch (Exception^ e)
    {
        std::cerr << "������ ����������� ��������� ����: " << marshal_as<std::string>(e->Message) << std::endl;
        return 1;
    }

    // �������� ������ � ������� Winsock
    WSACleanup();

    return 0;
}