#pragma once 
#include <cstdlib>
#include <cstdio>

// A macro to disallow copy operator=
// This should be used in the private: declarations for a class.
#define CEERPC_DISALLOW_ASSIGN_(type) \
  type& operator=(type const &) = delete

// A macro to disallow copy constructor and operator=
// This should be used in the private: declarations for a class.
#define CEERPC_DISALLOW_COPY_AND_ASSIGN_(type) \
  type(type const&) = delete;                 \
  type& operator=(type const&) = delete

// A macro to disallow move operator=
// This should be used in the private: declarations for a class.
#define CEERPC_DISALLOW_MOVE_ASSIGN_(type) \
  type& operator=(type &&) noexcept = delete

// A macro to disallow move constructor and operator=
// This should be used in the private: declarations for a class.
#define CEERPC_DISALLOW_MOVE_AND_ASSIGN_(type) \
  type(type&&) noexcept = delete;             \
  type& operator=(type&&) noexcept = delete


// A macro to disallow copy operator=
// This should be used in the private: declarations for a class.
#define CEERPC_DEFAULT_ASSIGN_(type) \
  type& operator=(type const &) = default

// A macro to disallow copy constructor and operator=
// This should be used in the private: declarations for a class.
#define CEERPC_DEFAULT_COPY_AND_ASSIGN_(type) \
  type(type const&) = default;                 \
  type& operator=(type const&) = default

// A macro to disallow move operator=
// This should be used in the private: declarations for a class.
#define CEERPC_DEFAULT_MOVE_ASSIGN_(type) \
  type& operator=(type &&) noexcept = default

// A macro to disallow move constructor and operator=
// This should be used in the private: declarations for a class.
#define CEERPC_DEFAULT_MOVE_AND_ASSIGN_(type) \
  type(type&&) noexcept = default;             \
  type& operator=(type&&) noexcept = default


inline void errif(bool condition, const char *msg) {
  if (condition) {
    perror(msg);
    exit(EXIT_FAILURE);
  }
}
