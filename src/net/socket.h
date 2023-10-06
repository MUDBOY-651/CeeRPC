#pragma once
#include "inet_address.h"
#include "util.h"

namespace ceerpc {

namespace net {

constexpr int MaxConnectNum = 1024;

class Socket {
private:
  int fd_;

public:
  Socket();
  Socket(int fd);
  CEERPC_DISALLOW_COPY_AND_ASSIGN_(Socket);
  CEERPC_DISALLOW_MOVE_AND_ASSIGN_(Socket);
  ~Socket();

  void Bind(InetAddress *) const;

  void Listen() const;

  int Accept(InetAddress *) const;

  void Connect(InetAddress *);

  int get_fd() { return fd_; }
};

} // namespace net
} // namespace ceerpc