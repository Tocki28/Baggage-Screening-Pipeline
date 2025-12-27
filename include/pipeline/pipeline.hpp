#pragma once

#include "pipeline/stage.hpp"

#include <memory>
#include <vector>

namespace bsp {

class Pipeline {
public:
  void add_stage(std::unique_ptr<IStage> stage);
  [[nodiscard]] ScanResult run(const Image& image) const;

private:
  std::vector<std::unique_ptr<IStage>> stages_;
};

} // namespace bsp
