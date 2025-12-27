#pragma once

#include "pipeline/stage.hpp"

namespace bsp {

class DetectStage final : public IStage {
public:
  [[nodiscard]] std::string name() const override { return "DetectStage"; }
  void run(Context& ctx) override;
};

} // namespace bsp
