#include "src/net/inet_address.h"
#include "src/net/socket.h"


int main() {
  auto inetAddr = new ceerpc::net::InetAddress("127.0.0.1");
  auto socket = new ceerpc::net::Socket();
  socket->Bind(inetAddr);
  socket->Listen();
  int fd = socket->Accept(inetAddr);
  printf("Server Connected!");
}