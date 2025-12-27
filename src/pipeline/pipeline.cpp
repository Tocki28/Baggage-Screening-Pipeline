#include "pipeline/pipeline.hpp"

#include <stdexcept>

namespace bsp {

void Pipeline::add_stage(std::unique_ptr<IStage> stage) {
  if (!stage) {
    throw std::invalid_argument("add_stage: stage is null");
  }
  stages_.push_back(std::move(stage));
}

ScanResult Pipeline::run(const Image& image) const {
  Context ctx;
  ctx.input = &image;

  for (const auto& stage : stages_) {
    stage->run(ctx);
  }

  return ctx.result;
}

} // namespace bsp
