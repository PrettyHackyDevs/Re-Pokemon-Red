#pragma once

#include <utils.hpp>

class Tile {
   public:
    Tile(uint8_t collision_directions_bitmask, uint8_t interaction_directions_bitmask);
    ~Tile();
    bool isCollision(uint8_t player_direction);
    bool isInteraction(uint8_t player_direction);
    utils::Coordinate getCoordinate();

   private:
    uint8_t collision_directions_bitmask_;
    uint8_t interaction_directions_bitmask_;
};