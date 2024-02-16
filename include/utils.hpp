#pragma once

#include <stdint.h>

namespace utils {
    typedef enum Direction : uint8_t {
        up = 0x00,
        down,
        left,
        right,
    }
}
