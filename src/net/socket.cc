//
// Created by roshindebian12 on 23-8-29.
//
#include "socket.h"
#include "ceerpc/status.h"
#include <sys/socket.h>
#include <unistd.h>

namespace ceerpc {

namespace net {

Socket::Socket() : fd_(-1), inet_address_(nullptr) {
  fd_ = socket(AF_INET, SOCK_STREAM, 0);
  errif(fd_ == -1, "socket create error");
}

Socket::Socket(int fd) : fd_(fd), inet_address_(nullptr) {
  errif(fd_ == -1, "socket create error");
}

Socket::~Socket() {
  if (fd_ != -1) {
    close(fd_);
    fd_ = -1;
  }
}

void Socket::Bind(InetAddress *addr) const {
  errif(::bind(fd_, reinterpret_cast<sockaddr *>(&addr->addr), addr->addr_len),
        "bind error");
}

void Socket::Listen() const {
  errif(::listen(fd_, MaxConnectNum), "listen error");
}

std::tuple<int, Status> Socket::Accept() const {
  int client_sockfd =
      ::accept(fd_, reinterpret_cast<sockaddr *>(&inet_address_->addr),
               &inet_address_->addr_len);
  errif(client_sockfd == -1, "socket accept error");
  if (client_sockfd == -1) {
    return {client_sockfd, Status::Corruption("socket accept error")};
  }
  return {client_sockfd, Status::OK()};
}

void Socket::Connect(InetAddress *addr_) {
  struct sockaddr_in addr = addr_->addr;
  errif(connect(fd_, (sockaddr *)&addr, addr_->addr_len), "connect error");
}

} // namespace net
} // namespace ceerpc