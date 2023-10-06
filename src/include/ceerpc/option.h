#pragma once
#include "ceerpc/status.h"
#include "ceerpc/util.h"
#include <_types/_uint32_t.h>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <string>

namespace ceerpc {

class Option {
  using Type = std::string;

public:
  static const uint64_t CEERPC_MAGIC_NUMBER = 1202;
  static const uint32_t DefaultHandleTimeout = 3000;     // 3000ms
  static const uint32_t DefualtConnectionTimeout = 1000; // 1000ms
  auto get_magic_number() -> uint64_t const { return magic_number_; }
  auto get_handle_timeout() -> uint32_t const { return handle_timeout_; }
  auto get_connection_timeout() -> uint32_t const {
    return connection_timeout_;
  }

  Option(uint32_t conn_timeout = DefualtConnectionTimeout,
         uint32_t handle_timeout = DefaultHandleTimeout)
      : connection_timeout_(conn_timeout), handle_timeout_(handle_timeout),
        magic_number_(CEERPC_MAGIC_NUMBER) {}
  CEERPC_DEFAULT_COPY_AND_ASSIGN_(Option);
  CEERPC_DEFAULT_MOVE_AND_ASSIGN_(Option);

private:
  uint64_t magic_number_;
  uint32_t connection_timeout_;
  uint32_t handle_timeout_;
};

} // namespace ceerpc