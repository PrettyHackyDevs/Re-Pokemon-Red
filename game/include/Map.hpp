#pragma once

#include <Tile.hpp>

#include <iostream>
#include <string>
#include <map>
#include <boost/multi_array.hpp>

using tileArray = boost::multi_array<Tile,2>;
using entityMap = std::map<uint32_t,entity::Entity>;

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
        Map(const uint16_t &id, const uint8_t &current_type, const std::string &map_name, const std::string &bitmap_name, const tileArray &tiles, const uint16_t &dimensionX, const uint16_t &dimensionY, const entityMap &entities);
        ~Map();

        void setId(const uint16_t &id);
        void setCurrentType(const uint8_t &current_type);
        void setMapName(const std::string &map_name);
        void setBitmapName(const std::string &bitmap_name);
        void setTiles(const tileArray tiles, const uint16_t &dimensionX, const uint16_t &dimensionY);
        void setEntities(const entityMap &entities);
        void setTile(const utils::Coordinate &coordinate, const Tile &tile);

        const uint16_t getId();
        const uint8_t getCurrentType();
        const std::string getMapName();
        const std::string getBitmapName();
        const tileArray getTiles();
        const entityMap getEntities();

        void swapTiles(Tile tile1, Tile Tile2);

        bool doesItCollide(const tils::Coordinate &coordinate, const uint8_t &direction);
        bool doesItInteract(const utils::Coordinate &coordinate, const uint8_t &direction);
        bool isPokemonBattleTriggered();
        bool isTrainerBattleTriggered();

}