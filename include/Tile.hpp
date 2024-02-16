#pragma once

#include <include/utils.hpp>

class Tile {
    public:
        Tile();
        ~Tile();
        bool isCollision(utils::Direction direction);
        bool isInteraction(utils::Direction direction);

    private:
        int x_pos;
        int y_pos;
        bool collidesFromAbove();
        bool collidesFromBelow();
        bool collidesFromRight();
        bool collidesFromLeft();

        bool interactsFromAbove();
        bool interactsFromBelow();
        bool interactsFromRight();
        bool interactsFromLeft();
};