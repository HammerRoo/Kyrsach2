#include <iostream>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <vector>

#pragma comment(lib, "ws2_32.lib")

struct ClientInfo
{
    SOCKET socket;
    std::string ip;
    int port;
    int number; // номер клиента
};

int main()
{
    WSADATA wsaData;
    SOCKET listeningSocket;
    sockaddr_in serverAddr, clientAddr;
    int clientAddrLen = sizeof(clientAddr);
    int nextClientNumber = 1; // следующий номер для нового клиента
    std::vector<ClientInfo> clients; // массив для хранения информации о клиентах

    // Инициализация Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        std::cerr << "Error initialization Winsock." << std::endl;
        return 1;
    }

    // Создание слушающего сокета
    listeningSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (listeningSocket == INVALID_SOCKET)
    {
        std::cerr << "Error creating socket." << std::endl;
        WSACleanup();
        return 1;
    }

    // Установка сокета в неблокирующий режим
    u_long mode = 1;
    if (ioctlsocket(listeningSocket, FIONBIO, &mode) != 0)
    {
        std::cerr << "Error setting socket to non-blocking mode." << std::endl;
        closesocket(listeningSocket);
        WSACleanup();
        return 1;
    }

    // Настройка адреса сервера
    ZeroMemory(&serverAddr, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(2107);
    serverAddr.sin_addr.s_addr = INADDR_ANY;

    // Привязка сокета к адресу
    if (bind(listeningSocket, (sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR)
    {
        std::cerr << "Error binding socket" << std::endl;
        closesocket(listeningSocket);
        WSACleanup();
        return 1;
    }

    // Перевод сокета в режим прослушивания
    if (listen(listeningSocket, SOMAXCONN) == SOCKET_ERROR)
    {
        std::cerr << "Error switching socket to listening." << std::endl;
        closesocket(listeningSocket);
        WSACleanup();
        return 1;
    }

    std::cout << "Server started. Waiting for connections..." << std::endl;

    while (true)
    {
        // Проверка состояния каждого клиентского сокета
        for (int i = 0; i < clients.size(); i++)
        {
            char buffer[32];
            int result = recv(clients[i].socket, buffer, sizeof(buffer), MSG_PEEK);

            if (result == 0 || (result == SOCKET_ERROR && WSAGetLastError() == WSAECONNRESET))
            {
                // Клиент отключился
                std::cout << "Client {" << clients[i].number << "} disconnected." << std::endl;

                // Удаление клиента из списка
                closesocket(clients[i].socket);
                clients.erase(clients.begin() + i);
                i--; // уменьшаем счетчик, так как удалили элемент
                continue;
            }
        }

        SOCKET clientSocket = accept(listeningSocket, (sockaddr*)&clientAddr, &clientAddrLen);
        if (clientSocket != INVALID_SOCKET)
        {
            // Получение IP-адреса и порта клиента
            char clientIP[INET_ADDRSTRLEN];
            inet_ntop(AF_INET, &clientAddr.sin_addr, clientIP, INET_ADDRSTRLEN);
            int clientPort = ntohs(clientAddr.sin_port);

            // Добавление информации о клиенте в массив
            ClientInfo newClient;
            newClient.socket = clientSocket;
            newClient.ip = clientIP;
            newClient.port = clientPort;
            newClient.number = nextClientNumber++;

            clients.push_back(newClient);

            std::cout << "Client joined {" << newClient.number << "} IP: " << newClient.ip << " Port: " << newClient.port << std::endl;

            // Здесь ожидание данных от клиента
            char buffer[256];
            int bytesReceived = recv(clientSocket, buffer, sizeof(buffer), 0);
            if (bytesReceived > 0)
            {
                buffer[bytesReceived] = '\0';
                std::cout << "Received IP address from client {" << newClient.number << "}: " << buffer << std::endl;
            }
        }
        else
        {
            int error = WSAGetLastError();
            if (error != WSAEWOULDBLOCK && error != 0)
            {
                std::cerr << "Error accepting connection. Error code: " << error << std::endl;
            }
        }
    }

    // Закрытие сокета прослушивания и очистка Winsock
    closesocket(listeningSocket);
    WSACleanup();

    return 0;
}