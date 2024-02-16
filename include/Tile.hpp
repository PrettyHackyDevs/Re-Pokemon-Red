#pragma once

#include <include/utils.hpp>

class Tile {
    public:
        Tile(utils::Coordinate coordinate, uint8_t collision_directions_bitmask, uint8_t interaction_directions_bitmask);
        ~Tile();
        bool isCollision(utils::Direction player_direction);
        bool isInteraction(utils::Direction player_direction);
        utils::Coordinate getCoordinate();

    private:
        utils::Coordinate coordinate_;
        uint8_t collision_directions_bitmask_;
        uint8_t interaction_directions_bitmask_;
};