#pragma once

#include "pipeline/stage.hpp"

namespace bsp {

class PreprocessStage final : public IStage {
public:
  [[nodiscard]] std::string name() const override { return "PreprocessStage"; }
  void run(Context& ctx) override;
};

} // namespace bsp
