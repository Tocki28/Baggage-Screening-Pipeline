#include "imgproc/basic_ops.hpp"

#include <cstdint>

namespace bsp::imgproc {

void invert(Image& img) {
  if (!img.valid()) return;

  for (auto& px : img.pixels) {
    px = static_cast<std::uint8_t>(255 - px);
  }
}

} // namespace bsp::imgproc
