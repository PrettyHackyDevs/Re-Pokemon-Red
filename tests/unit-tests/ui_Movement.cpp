#include<Movement.hpp>
#include "gtest/gtest.h"

utils::Coordinate coordinate;
uint8_t direction;

void resetState() {
    coordinate.x = 0;
    coordinate.y = 0;
    direction = utils::Direction::none;
}

int movingUp(int numberOfSteps) {
    
    resetState();

    //_movement::Movement myMovement(coordinate, direction);

    

    resetState();

}