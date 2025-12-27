#include "pipeline/stages/detect_stage.hpp"

#include <iostream>

namespace bsp {

void DetectStage::run(Context& ctx) {
  // Fake detection for now (vertical slice)
  Detection d;
  d.x = 10; d.y = 12; d.w = 40; d.h = 25;
  d.confidence = 0.82f;
  d.label = "demo-object";

  ctx.result.detections.push_back(d);

  std::cout << "[DetectStage] detections=" << ctx.result.detections.size() << "\n";
}

} // namespace bsp
