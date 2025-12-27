#pragma once

#include "pipeline/stage.hpp"

namespace bsp {

class ReportStage final : public IStage {
public:
  [[nodiscard]] std::string name() const override { return "ReportStage"; }
  void run(Context& ctx) override;
};

} // namespace bsp
