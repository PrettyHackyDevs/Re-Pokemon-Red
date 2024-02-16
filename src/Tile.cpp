#include <include/Tile.hpp>

Tile::Tile() {}
Tile::~Tile() {}

bool Tile::isCollision(utils::Direction direction) {}
bool Tile::isInteraction(utils::Direction direction) {}

bool Tile::collidesFromAbove() {}
bool Tile::collidesFromBelow() {}
bool Tile::collidesFromRight() {}
bool Tile::collidesFromLeft() {}

bool Tile::interactsFromAbove() {}
bool Tile::interactsFromBelow() {}
bool Tile::interactsFromRight() {}
bool Tile::interactsFromLeft() {}