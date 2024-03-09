#pragma once

#include <stdint.h>

namespace utils {
struct Coordinate {
    int16_t x;
    int16_t y;
};

enum Direction : uint8_t {
    up = 0b00000001,
    down = 0b00000010,
    left = 0b00000100,
    right = 0b00001000,
};

enum MapTypes : uint8_t { generic_building = 0b00000001, outside_world = 0b00000010, gym = 0b00000100, rocket_hideout = 0b00001000, cave = 0b00010000, dark_cave = 0b00100000 }

}  // namespace utils
