#include "pipeline/stages/preprocess_stage.hpp"
#include "imgproc/basic_ops.hpp"

#include <iostream>

namespace bsp {

void PreprocessStage::run(Context& ctx) {
  if (!ctx.input || !ctx.input->valid()) {
    ctx.add_note("PreprocessStage: invalid input image");
    return;
  }

  // For now, we copy the image into a local working image just to demonstrate flow.
  // Later you’ll store intermediate buffers inside Context (or keep a working Image there).
  Image working = *ctx.input;

  // Call low-level imgproc algorithm
  imgproc::invert(working);

  // Store a simple note proving it ran
  ctx.add_note("PreprocessStage: invert applied");
  std::cout << "[PreprocessStage] ok\n";
}

} // namespace bsp
