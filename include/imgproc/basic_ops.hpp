#pragma once

#include "core/types.hpp"

namespace bsp::imgproc {

// Simple starter algorithm: invert grayscale image in-place.
// This proves imgproc is called from pipeline cleanly.
void invert(Image& img);

} // namespace bsp::imgproc
