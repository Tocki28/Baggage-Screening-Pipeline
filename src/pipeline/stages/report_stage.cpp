#include "pipeline/stages/report_stage.hpp"

#include <iostream>

namespace bsp {

void ReportStage::run(Context& ctx) {
  std::cout << "[ReportStage] detections=" << ctx.result.detections.size() << "\n";

  if (!ctx.notes.empty()) {
    std::cout << "  Notes:\n";
    for (const auto& n : ctx.notes) {
      std::cout << "   - " << n << "\n";
    }
  }
}

} // namespace bsp
