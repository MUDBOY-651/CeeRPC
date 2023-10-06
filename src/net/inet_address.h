#pragma once
#include <arpa/inet.h>
#include <sys/socket.h>

namespace ceerpc {

namespace net {

constexpr uint16_t DefaultPortNum = 1202;

class InetAddress {
public:
  struct sockaddr_in addr {};
  socklen_t addr_len;
  InetAddress(const InetAddress &) = default;
  InetAddress &operator=(const InetAddress &) = default;
  InetAddress(InetAddress &&) = default;
  InetAddress &operator=(InetAddress &&) = default;

  InetAddress(const char *ip, uint16_t port = DefaultPortNum);

  // address to accept any incoming messages.
  InetAddress(uint16_t port = DefaultPortNum);

  ~InetAddress() = default;
};

} // namespace net
} // namespace ceerpc