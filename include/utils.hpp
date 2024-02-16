#pragma once

#include <stdint.h>

namespace utils {
    typedef enum Direction : uint8_t {
        up      = 0x0001,
        down    = 0x0010,
        left    = 0x0100,
        right   = 0x1000,
    };
}
