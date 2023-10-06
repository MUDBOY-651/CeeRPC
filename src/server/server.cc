#include "server.h"
#include "net/socket.h"
#include "util/logger.h"

namespace ceerpc {

void Server::Accept(net::Socket *listener) {
  while (true) {
    const auto& [sockfd, result] = listener->Accept();
    if (!result.ok()) {
      Logger::WARNING(result.ToString());
      break;
    }
    // TODO: add thread
  }
}
void Server::ServeFd(net::Fd socket_fd) {
  auto socket = new net::Socket(socket_fd);
  auto opt = new Option();
  // TODO: decode option
  if (opt->get_magic_number() != Option::CEERPC_MAGIC_NUMBER) {
    Logger::WARNING("[rpc server] invalid magic number");
  }
  // check: 可能需要再握手一次 option 解决TCP粘包。
  this->HandleFd(opt);
}

void Server::HandleFd(Option *opt) {

}

}
