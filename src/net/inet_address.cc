#include "inet_address.h"
#include <cstring>

namespace ceerpc {

namespace net {

InetAddress::InetAddress(const char *ip, uint16_t port) {
  bzero(&addr, sizeof(addr));
  addr.sin_family = AF_INET;
  addr.sin_addr.s_addr = inet_addr(ip);
  addr.sin_port = htons(port);
  addr_len = sizeof(addr);
}

InetAddress::InetAddress(uint16_t port) {
  bzero(&addr, sizeof(addr));
  addr.sin_family = AF_INET;
  addr.sin_addr.s_addr = htonl(INADDR_ANY);
  addr.sin_port = htons(port);
  addr_len = sizeof(addr);
}

} // namespace net
} // namespace ceerpc