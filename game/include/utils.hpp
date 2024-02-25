#pragma once

#include <stdint.h>

namespace utils {
    struct Coordinate
    {
        int x;
        int y;
    };

    enum Direction : uint8_t {
        up      = 0b00000001,
        down    = 0b00000010,
        left    = 0b00000100,
        right   = 0b00001000,
    };
}
