#pragma once
#include "ceerpc/option.h"
#include "net/socket.h"

namespace ceerpc {

class Server {
 public:
  void Accept(net::Socket* listener); 
  void ServeFd(net::Fd socket_fd);
  void HandleFd(Option* opt);
 private:
};

} // namespace ceerpc