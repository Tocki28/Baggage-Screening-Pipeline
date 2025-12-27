#pragma once

#include <vector>

namespace bsp {

struct Image {
    int width = 0;
    int height = 0;
    std::vector<std::uint8_t> pixels;

    Image() = default;
    Image(int w, int h, std::uint8_t value = 0) : width(w), height(h), pixels(static_cast<size_t>(w*h), value) {}

    [[nodiscard]] bool valid() const {
        return width > 0 && height > 0 && pixels.size() == static_cast<size_t>(width * height);
    }
};

struct Detection {
  int x = 0;
  int y = 0;
  int w = 0;
  int h = 0;
  float confidence = 0.0f;
  std::string label;
};

struct ScanResult {
    std::vector<Detection> detections;
};

}