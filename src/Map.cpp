#include "Map.h"

Map::Map(uint16_t id, uint8_t currentType, std::string mapName, std::string bitmapName, tileStdMap tiles, entityStdMap entities) {
    id_ = id;
    currentType_ = currentType;
    mapName_ = mapName;
    bitmapName_ = bitmapName;
    tiles_ = tiles;
    entities_ = entities;
}

bool Map::doesItCollide(uint16_t desiredX, uint16_t desiredY, uint8_t direction) {
    
}
bool Map::doesItInteract(uint16_t desiredX, uint16_t desiredY, uint8_t direction) {

}