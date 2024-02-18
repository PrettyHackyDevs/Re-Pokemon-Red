#include <include/Tile.hpp>
#include <include/utils.hpp>

Tile::Tile(uint8_t collision_directions_bitmask, uint8_t interaction_directions_bitmask) {
    this->collision_directions_bitmask_ = collision_directions_bitmask;
    this->interaction_directions_bitmask_ = interaction_directions_bitmask;
}

Tile::~Tile() {}

bool Tile::isCollision(uint8_t player_direction) { return player_direction & this->collision_directions_bitmask_; }

bool Tile::isInteraction(uint8_t player_direction) { return player_direction & this->interaction_directions_bitmask_; }