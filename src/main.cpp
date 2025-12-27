#include "pipeline/pipeline.hpp"
#include "pipeline/stages/preprocess_stage.hpp"
#include "pipeline/stages/detect_stage.hpp"
#include "pipeline/stages/report_stage.hpp"

#include <iostream>
#include <memory>

int main() {
  using namespace bsp;

  // Create a dummy image (grayscale)
  Image img(64, 64, 30);

  Pipeline pipeline;
  pipeline.add_stage(std::make_unique<PreprocessStage>());
  pipeline.add_stage(std::make_unique<DetectStage>());
  pipeline.add_stage(std::make_unique<ReportStage>());

  const ScanResult result = pipeline.run(img);

  std::cout << "Done. Final detections=" << result.detections.size() << "\n";
  return 0;
}
