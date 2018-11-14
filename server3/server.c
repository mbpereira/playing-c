#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define TRUE 1
#define FALSE 0

#define MAXREQUESTS 5
#define BUFLEN 100

typedef struct sockaddr_in Socket;
typedef struct sockaddr    genericSock;

int main(int argv, char *argc[]){

  if(argv != 3){
    fputs("Number of parameters are incorrectly\n\n", stdout);
    fputs("Please, exec as ./client <SERVER> <PORT>", stdout);
    exit(1);
  }

  char *servIP       = argc[1];
  in_port_t servPort = atoi(argc[2]);

  int server = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

  if(server <= 0){
    printf("sock() failed");
    exit(2);
  }

  Socket serverSock;
  memset(&serverSock, 0, sizeof(serverSock));
  serverSock.sin_family      = AF_INET;
  serverSock.sin_addr.s_addr = htonl(INADDR_ANY);
  serverSock.sin_port        = htons(servPort);


  int binded = bind(server, (genericSock*) &serverSock, sizeof(serverSock));

  if(binded < 0){
    printf("bind() failed");
    exit(3);
  }


  if(listen(server, MAXREQUESTS) < 0){
    printf("listen() failed");
    exit(4);
  }

  fputs("Waiting for connection\n", stdout);


  int status = TRUE;
  Socket clientSock;
  socklen_t clientSockLen = sizeof(clientSock);

  char buffer[BUFLEN];
  char bufferToSend[BUFLEN] = "Hello client";

  while(status == TRUE){
    int client = accept(server, (genericSock*) &clientSock, &clientSockLen);

    if(client <= 0){
      fputs("accept() failed\n", stderr);
      exit(5);
    }

    char *clientIP = inet_ntoa(clientSock.sin_addr);


    fputs("Connection stablished\n", stdout);
    fputs("Client: ", stdout);
    fputs(clientIP, stdout);
    fputs("\n", stdout);

    ssize_t bytesRecv = recv(client, buffer, BUFLEN, 0);
    if(bytesRecv < 0){
      fputs("recv() failed\n", stderr);
      exit(6);
    }

    fputs("Received: ", stdout);
    fputs(buffer, stdout);
    fputs("\n", stdout);


    while(bytesRecv > 0){
      ssize_t bytesSend = send(client, bufferToSend, BUFLEN, 0);
      if(bytesSend <= 0){
        fputs("send() failed", stderr);
        exit(7);
      }

      bytesRecv = recv(client, bufferToSend, BUFLEN, 0);
      if(bytesRecv < 0){
        fputs("recv() client failed\n", stderr);
        exit(8);
      }

      fputs("Sended: ", stdout);
      fputs(bufferToSend, stdout);
      fputs("\n", stdout);

    }

    close(client);

  }


}
