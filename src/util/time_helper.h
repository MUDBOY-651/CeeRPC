#pragma once
#include <__chrono/duration.h>
#include <chrono>
#include <cstdlib>

inline bool After(std::chrono::time_point<std::chrono::system_clock> start, std::chrono::milliseconds time_limit) {
  auto end = std::chrono::system_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  return duration > time_limit;
}

