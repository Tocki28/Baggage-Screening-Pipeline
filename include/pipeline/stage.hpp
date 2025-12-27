#pragma once

#include "pipeline/context.hpp"

#include <string>

namespace bsp {

class IStage {
public:
  virtual ~IStage() = default;

  // Name helps logging/debugging
  [[nodiscard]] virtual std::string name() const = 0;

  // Each stage mutates Context (adds intermediate results, detections, notes)
  virtual void run(Context& ctx) = 0;
};

} // namespace bsp
