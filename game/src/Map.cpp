#include <Map.hpp>

Map::Map(const uint16_t& id, const uint8_t& current_type, const std::string& map_name, const std::string& bitmap_name, const tileArray& tiles, const uint16_t& dimensionX, const uint16_t& dimensionY,
         const entityMap& entities) {
    setId(id);
    setCurrentType(current_type);
    setMapName(map_name);
    setBitmapName(bitmap_name);
    setTiles(tiles, dimensionX, dimensionY);
    setEntities(entities);
}

Map::~Map() {}

void Map::setId(const uint16_t& id) { this->id_ = id; }
void Map::setcurrentType(const uint8_t& current_type) { this->current_type_ = current_type; }
void Map::setMapName(const std::string& map_name) { this->map_name_ = map_name; }
void Map::setBitmapName(const std::string& bitmap_name) { this->bitmap_name_ = bitmap_name; }
void Map::setTiles(const tileArray& tiles, const uint16_t& dimensionX, const uint16_t& dimensionY) {
    if (dimensionX == 0 || dimensionY == 0) {
        return;
    }
    tiles_.resize(boost::extents[dimensionX][dimensionY]);
    this->tiles_ = tiles;
}
void Map::setEntities(const entityMap& entities) { this->entities_ = entities; }
void Map::setTile(const utils::Coordinate& coordinate, const Tile& tile) { tiles_[coordinate.x][coordinate.y] = tile; }

const uint16_t Map::getId() { return id_; }
const uint8_t Map::getCurrentType() { return current_type_; }
const std::string Map::getMapName() { return map_name_; }
const std::string Map::getBitmapName() { return bitmap_name_; }
const tileArray Map::getTiles() { return tiles_; }
const entityMap Map::getEntities() { return entities_; }

void Map::swapTiles(Tile& tile1, Tile& tile2) {
    Tile tiletmp = tile1;
    tile1 = tile2;
    tile2 = tiletmp;
}

bool Map::doesItCollide(const utils::Coordinate& coordinate, const uint8_t& direction) {
    Tile tile = tiles_[coordinate.x][coordinate.y];
    return tile.isCollision(direction);
}

bool Map::doesItInteract(const utils::Coordinate& coordinate, const uint8_t& direction) {
    Tile tile = tiles_[coordinate.x][coordinate.y];
    return tile.isInteraction(direction);
}