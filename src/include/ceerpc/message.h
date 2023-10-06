#pragma once 
#include <string>
#include "ceerpc/status.h"

namespace ceerpc {

class Header {
 public:
  std::string service_header_;
  uint64_t seq_;
  Status status_;

};

}
