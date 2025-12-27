#pragma once

#include "core/types.hpp"

#include <string>
#include <vector>

namespace bsp {

struct Context {
  const Image* input = nullptr; // points to input owned by caller
  ScanResult result;

  // Optional debug messages (useful early)
  std::vector<std::string> notes;

  void add_note(std::string msg) { notes.push_back(std::move(msg)); }
};

} // namespace bsp
