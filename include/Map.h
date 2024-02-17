#pragma once

#include "Tile.h"

#include <iostream>
#include <string>
#include <vector>

using tileStdMap = std::map<std::pair,tile::Tile>;
using entityStdMap = std::map<uint32_t,entity::Entity>;

class Map {
    private:
        uint16_t id_;
        uint8_t currentType_;
        std::string mapName_;
        std::string bitmapName_;
        tileStdMap tiles_; //<Coordinates,tile>
        entityStdMap entities_;// Map<entityId, Entity> 

    public:

        Map();
        ~Map();
        Map(uint16_t id, uint8_t currentType, std::string mapName, std::string bitmapName, tileStdMap tiles, entityStdMap entities);

        bool doesItCollide(uint16_t desiredX, uint16_t desiredY, uint8_t direction);
        bool doesItInteract(uint16_t desiredX, uint16_t desiredY, uint8_t direction);

}