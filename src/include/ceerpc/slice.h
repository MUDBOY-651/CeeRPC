#pragma once
#include <cassert>
#include <cstring>
#include <string>

namespace ceerpc {

class Slice {
public:
  Slice() : data_(""), size_(0) {}
  Slice(const char *data, size_t size) : data_(data), size_(size) {}
  Slice(const std::string s) : data_(s.data()), size_(s.size()) {}
  Slice(const char *s) : data_(s), size_(strlen(s)) {}
  Slice(const Slice &) = default;
  Slice &operator=(const Slice &) = default;
  const char *data() const { return data_; }
  size_t size() const { return size_; }
  bool empty() { return size_ == 0; }

  // Return the ith byte in the referenced data.
  // REQUIRES: n < size()
  char operator[](size_t n) const {
    assert(n < size());
    return data_[n];
  }

  void clear() {
    data_ = "";
    size_ = 0;
  }
  std::string ToString() const { return std::string(data_, size_); }

private:
  const char *data_;
  size_t size_;
};

inline bool operator==(const Slice& x, const Slice& y) {
  return ((x.size() == y.size()) &&
          (memcmp(x.data(), y.data(), x.size()) == 0));
}

inline bool operator!=(const Slice& x, const Slice& y) { return !(x == y); }

}; // namespace ceerpc
