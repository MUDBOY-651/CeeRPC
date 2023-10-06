#pragma once
#include "ceerpc/status.h"
#include "ceerpc/util.h"
#include "inet_address.h"

namespace ceerpc {

namespace net {

constexpr int MaxConnectNum = 1024;
using Fd = int;

class Socket {
private:
  int fd_;
  InetAddress *inet_address_;

public:
  Socket();
  Socket(int fd);
  CEERPC_DISALLOW_COPY_AND_ASSIGN_(Socket);
  CEERPC_DISALLOW_MOVE_AND_ASSIGN_(Socket);
  ~Socket();

  void Bind(InetAddress *) const;

  void Listen() const;

  std::tuple<int, Status> Accept() const;

  void Connect(InetAddress *);

  Fd get_fd() { return fd_; }
};

} // namespace net
} // namespace ceerpc