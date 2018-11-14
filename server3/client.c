#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define BUFLEN 100

typedef struct sockaddr_in Socket;
typedef struct sockaddr    genericSock;


int main(int argv, char *argc[]){
  if(argv != 3){
    fputs("Number of parameters are incorrectly\n", stderr);
    fputs("Please, exec as ./client <SERVER> <PORT>\n", stderr);
    exit(1);
  }

  char *servIP       = argc[1];
  in_port_t servPort = atoi(argc[2]);


  int client = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  if(client <= 0){
    fputs("sock() failed\n", stderr);
    exit(2);
  }

  Socket clientSock;
  memset(&clientSock, 0, sizeof(clientSock));
  clientSock.sin_family      = AF_INET;
  clientSock.sin_addr.s_addr = htonl(INADDR_ANY);
  clientSock.sin_port        = htons(servPort);

  socklen_t clientSockLen = sizeof(clientSock);
  int conn = connect(client, (genericSock*) &clientSock, clientSockLen);
  if(conn < 0){
    fputs("conn() failed\n", stderr);
    exit(3);
  }

  fputs("Connection stablished\n", stdout);

  char buffer[BUFLEN] = "Hello server";
  int bufferLen = sizeof(buffer);
  int bytesSend = 0;

  int sended = send(client, buffer, bufferLen, 0);

  if(sended != bufferLen){
    fputs("send() error\n", stderr);
    exit(4);
  }

  fputs("Sended: ", stdout);
  fputs(buffer, stdout);
  fputs("\n", stdout);

  while(bytesSend < bufferLen){
    ssize_t numBytes = recv(client, buffer, BUFLEN, 0);
    if(numBytes <= 0){
      fputs("recv() failed\n", stderr);
      exit(5);
    }
    buffer[numBytes] = '\0';
    bytesSend+=numBytes;

    fputs("Received: ", stdout);
    fputs(buffer, stdout);
    fputs("\n", stdout);

  }

  close(client);

}
