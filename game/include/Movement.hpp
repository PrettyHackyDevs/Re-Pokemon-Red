#pragma once

#include <utils.hpp>

namespace _movement {

class Movement {

protected:
    utils::Coordinate coordinate_;
    uint8_t direction_;

public:
    Movement();
    Movement(utils::Coordinate coordinate, uint8_t direction);
    ~Movement();
    void setCoordinate(utils::Coordinate coordinate);
    void setDirection(uint8_t direction);
    void setX(int16_t x);
    void setY(int16_t y);

    utils::Coordinate getCoordinate();
    uint8_t getDirection();
    int16_t getX();
    int16_t getY();

    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();


};

};