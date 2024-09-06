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

    // Закрытие сокета
    clientSocket->Shutdown(SocketShutdown::Both);
    clientSocket->Close();
}

std::string ReadFileContent(const std::string& filePath)
{
    std::ifstream file(filePath);
    if (!file.is_open())
    {
        std::cerr << "Ошибка открытия файла: " << filePath << std::endl;
        throw std::runtime_error("Ошибка открытия файла");
    }

    std::string content;
    std::getline(file, content);
    file.close();
    return content;
}

int main(array<String^>^ args)
{
    // Инициализация Winsock
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        std::cerr << "Ошибка инициализации Winsock." << std::endl;
        return 1;
    }

    // Чтение IP-адреса и порта из файлов
    std::string serverIP, serverPortStr;
    try
    {
        serverIP = ReadFileContent("aipi.txt");
        serverPortStr = ReadFileContent("port.txt");
    }
    catch (const std::exception& e)
    {
        std::cerr << "Ошибка чтения конфигурации: " << e.what() << std::endl;
        return 1;
    }

    // Преобразование строки порта в целое число
    int serverPort = std::stoi(serverPortStr);

    // Создание сокета
    Socket^ clientSocket = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::Tcp);

    // Проверка доступности сервера
    try
    {
        IPAddress^ ipAddress = IPAddress::Parse(gcnew String(serverIP.c_str()));
        IPEndPoint^ ipEndPoint = gcnew IPEndPoint(ipAddress, serverPort);

        // Попытка подключения с коротким таймаутом
        clientSocket->Connect(ipEndPoint);

        // Получение IP-адреса клиента
        String^ localIP = Dns::GetHostByName(Dns::GetHostName())->AddressList[0]->ToString();

        // Отправка IP-адреса на сервер
        array<Byte>^ sendData = Encoding::UTF8->GetBytes(localIP);
        clientSocket->Send(sendData);

        // Асинхронный прием ответа от сервера
        array<Byte>^ receiveData = gcnew array<Byte>(256); // Принимаем данные в буфер
        clientSocket->BeginReceive(receiveData, 0, receiveData->Length, SocketFlags::None, gcnew AsyncCallback(&ReceiveCallback), clientSocket);
    }
    catch (SocketException^ se)
    {
        // Вывод сообщения об ошибке
        std::cerr << "Ошибка подключения к серверу: " << marshal_as<std::string>(se->Message) << std::endl;
        MessageBox::Show("Извините, на данный момент сервер выключен.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return 1;
    }
    catch (Exception^ e)
    {
        std::cerr << "Общая ошибка: " << marshal_as<std::string>(e->Message) << std::endl;
        return 1;
    }

    // Инициализация и отображение основного окна
    try
    {
        CalendarMain^ mainForm = gcnew CalendarMain(clientSocket);
        mainForm->ShowDialog();
    }
    catch (Exception^ e)
    {
        std::cerr << "Ошибка отображения основного окна: " << marshal_as<std::string>(e->Message) << std::endl;
        return 1;
    }

    // Закрытие сокета и очистка Winsock
    WSACleanup();

    return 0;
}