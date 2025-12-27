CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -g

BUILD_DIR := build
TARGET := $(BUILD_DIR)/Baggage-Screening-Pipeline

SRCS := $(shell find src -name '*.cpp')
OBJS := $(patsubst src/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))
DEPS := $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

-include $(DEPS)

print:
	@echo "SRCS = $(SRCS)"
	@echo "OBJS = $(OBJS)"