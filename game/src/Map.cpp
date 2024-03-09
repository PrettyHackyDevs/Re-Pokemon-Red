#include <Map.hpp>

#include "spdlog/spdlog.h"

Map::Map(const uint16_t& id, const uint8_t& current_type, const std::string& map_name, const std::string& bitmap_name, const tileArray& tiles, const uint16_t& length_x, const uint16_t& length_y,
         const entityMap& entities) {
    setId(id);
    setCurrentType(current_type);
    setMapName(map_name);
    setBitmapName(bitmap_name);
    setTiles(tiles, length_x, length_y);
    setEntities(entities);
}

Map::~Map() {}

void Map::setId(const uint16_t& id) { this->id_ = id; }
void Map::setCurrentType(const uint8_t& current_type) { this->current_type_ = current_type; }
void Map::setMapName(const std::string& map_name) { this->map_name_ = map_name; }
void Map::setBitmapName(const std::string& bitmap_name) { this->bitmap_name_ = bitmap_name; }
void Map::setTiles(const tileArray& tiles, const uint16_t& length_x, const uint16_t& length_y) {
    if (length_x == 0 || length_y == 0) {
        SPDLOG_ERROR("The tile matrix that is being set has dimension 0. Exiting. ");
        throw std::invalid_argument("The tile matrix that is being set has dimension 0.");
        return;
    }
    tiles_.resize(boost::extents[length_x][length_y]);
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

void Map::swapTiles(Tile& tile_1, Tile& tile_2) { std::swap(tile_1, tile_2); }

bool Map::doesItCollide(const utils::Coordinate& coordinate, const uint8_t& direction) {
    Tile tile = tiles_[coordinate.x][coordinate.y];
    return tile.isCollision(direction);
}

bool Map::doesItInteract(const utils::Coordinate& coordinate, const uint8_t& direction) {
    Tile tile = tiles_[coordinate.x][coordinate.y];
    return tile.isInteraction(direction);
}