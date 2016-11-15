#pragma once
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#include <mutex>
using namespace std;

typedef struct
{
	SOCKET socket;
	mutex lock;
}SocketStruct;

class Socket
{
private:
	const int sendSleepInterval = 20;
	static Socket* instance;
	Socket();
	~Socket();
public:
	bool InitializeWindowsSockets();
	static Socket* Instance();
	int Select(SOCKET socket, int send);
	SOCKET Connect(char* ipAddress, int port);
	bool Send(SocketStruct* socket, char* data, int length);
	
};
