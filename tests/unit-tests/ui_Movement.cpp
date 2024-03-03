#include<Movement.hpp>
#include "gtest/gtest.h"

using namespace _movement;

utils::Coordinate coordinate;
uint8_t direction;

void resetState() {
    coordinate.x = 0;
    coordinate.y = 0;
    direction = utils::Direction::none;
}

bool movingUp(int numberOfSteps) {
    
    resetState();

    Movement my_movement(coordinate, direction);
    my_movement.moveUp();
    utils::Coordinate updated_coordinates = my_movement.getCoordinate();
    uint8_t updated_direction = my_movement.getDirection();
    utils::Coordinate updated_future_coordinates = my_movement.getFutureCoordinate();
    uint8_t updated_future_direction = my_movement.getFutureDirection();

    bool result_x = false;
    if(updated_coordinates.x == updated_future_coordinates.x) {
        result_x == true;
    }
    bool result_y = false;
    if( (updated_coordinates.y+1) == updated_future_coordinates.y) {
        result_y == true;
    }
    bool result_direction = false;
    if(updated_direction == utils::Direction::none && updated_future_direction == utils::Direction::up) {
        result_direction == true;
    }

    return result_x & result_y & result_direction;

    resetState();

}

namespace {

TEST() {
    EXPECT_EQ(true, movingUp(1));
}

}