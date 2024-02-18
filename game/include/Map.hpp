#pragma once

#include <Tile.hpp>
#include <boost/multi_array.hpp>
#include <iostream>
#include <map>
#include <string>

using tileArray = boost::multi_array<Tile, 2>;
using entityMap = std::map<uint32_t, Entity>;

class Map {
   private:
    uint16_t id_;
    uint8_t current_type_;
    std::string map_name_;
    std::string bitmap_name_;
    tileArray tiles_;
    entityMap entities_;

   public:
    Map();
    Map(const uint16_t& id, const uint8_t& current_type, const std::string& map_name, const std::string& bitmap_name, const tileArray& tiles, const uint16_t& length_x, const uint16_t& length_y,
        const entityMap& entities);
    ~Map();

    void setId(const uint16_t& id);
    void setCurrentType(const uint8_t& current_type);
    void setMapName(const std::string& map_name);
    void setBitmapName(const std::string& bitmap_name);
    void setTiles(const tileArray tiles, const uint16_t& length_x, const uint16_t& length_y);
    void setEntities(const entityMap& entities);
    void setTile(const utils::Coordinate& coordinate, const Tile& tile);

    const uint16_t getId();
    const uint8_t getCurrentType();
    const std::string getMapName();
    const std::string getBitmapName();
    const tileArray getTiles();
    const entityMap getEntities();

    void swapTiles(Tile& tile_1, Tile& tile_2);

    bool doesItCollide(const utils::Coordinate& coordinate, const uint8_t& direction);
    bool doesItInteract(const utils::Coordinate& coordinate, const uint8_t& direction);
    bool isPokemonBattleTriggered();
    bool isTrainerBattleTriggered();
}