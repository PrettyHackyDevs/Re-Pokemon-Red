#include "Map.h"

Map::Map(const uint16_t &id, const uint8_t &currentType, const std::string &mapName, const std::string &bitmapName, const tileArray &tiles, const uint16_t &dimensionX, const uint16_t &dimensionY, const entityStdMap &entities) {
    setId(id);
    setCurrentType(currentType);
    setMapName(mapName);
    setBitmapName(bitmapName);
    setTiles(tiles, dimensionX, dimensionY);
    setEntities(entities);

}

Map::~Map() {
    entities_.clear();
    
}

void Map::setId(const uint16_t &id) {
    this->id_ = id;
}
void Map::setCurrentType(const uint8_t &currentType) {
    this->currentType_ currentType;
}
void Map::setMapName(const std::string &mapName) {
    this->mapName_ = mapName;
}
void Map::setBitmapName(const std::string &bitmapName) {
    this->bitmapName_ = bitmapName;
}
void Map::setTiles(const tileArray &tiles, const uint16_t &dimensionX, const uint16_t &dimensionY) {
    if(dimensionX == 0 || dimensionY == 0) {
        return;
    }
    tiles_.resize(boost::extents[dimensionX][dimensionY]); 
    this->tiles_ = tiles;
}
void Map::setEntities(const entityStdMap &entities) {
    this->entities_ = entities;
}
void Map::setTile(const utils::Coordinate &coordinate, const Tile &tile) {
    tiles_[coordinate.x][coordinate.y] = tile;
}

const uint16_t Map::getId() {
    return id_;
}
const uint8_t Map::getCurrentType() {
    return currentType_;
}
const std::string Map::getMapName() {
    return mapName_;
}
const std::string Map::getBitmapName() {
    return bitmapName_;
}
const tileStdMap Map::getTiles() {
    return tiles_;
}
const entityStdMap Map::getEntities() {
    return entities_;
}

void Map::swapTiles(Tile &tile1, Tile &tile2) {
    tileArray tiletmp = tile1;
    tile1 = tile2;
    tile2 = tiletmp;
}

bool Map::doesItCollide(const utils::Coordinate &coordinate, const uint8_t &direction) {
    Tile tile = tiles_[coordinate.x][coordinate.y];
    return tile.isCollision(direction);

}

bool Map::doesItInteract(const utils::Coordinate &coordinate, const uint8_t &direction) {
    Tile tile = tiles_[coordinate.x][coordinate.y];
    return tile.isInteraction(direction);

}