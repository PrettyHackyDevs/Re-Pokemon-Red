#pragma once

#include <stdint.h>

namespace utils {
struct Coordinate {
    int x;
    int y;
};

enum Direction : uint8_t {
    up = 0b00000001,
    down = 0b00000010,
    left = 0b00000100,
    right = 0b00001000,
};

enum InteractionType : uint8_t {
    text_object = 0b00000001,
    text_human = 0b00000010,
    simple_choice = 0b00000100,
    multiple_choice = 0b00001000,
    collect_object = 0b00010000,
    movable_objects = 0b00100000,
    trigger = 0b01000000,
    trainer = 0b10000000
};
}  // namespace utils
