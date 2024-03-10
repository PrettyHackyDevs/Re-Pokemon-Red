#include <Movement.hpp>

#include "gtest/gtest.h"

using namespace _movement;

utils::Coordinate coordinate;
uint8_t direction;

void resetState() {
    coordinate.x = 0;
    coordinate.y = 0;
    direction = utils::Direction::none;
}

bool MovingUp(int numberOfSteps) {
    resetState();

    Movement my_movement(coordinate, direction);
    my_movement.moveUp();
    utils::Coordinate updated_coordinates = my_movement.getCoordinate();
    uint8_t updated_direction = my_movement.getDirection();
    utils::Coordinate updated_future_coordinates = my_movement.getFutureCoordinate();
    uint8_t updated_future_direction = my_movement.getFutureDirection();

    std::cout << "updated_coordinates = " << updated_coordinates.x << "," << updated_coordinates.y << std::endl;
    std::cout << "updated_future_coordinates = " << updated_future_coordinates.x << "," << updated_future_coordinates.y << std::endl;
    std::cout << "updated_direction = " << updated_direction << std::endl;
    std::cout << "updated_future_direction = " << updated_future_direction << std::endl;

    bool result_x = false;
    if (updated_coordinates.x == updated_future_coordinates.x) {
        result_x == true;
    }
    std::cout << result_x << std::endl;
    bool result_y = false;
    if ((updated_coordinates.y + 1) == updated_future_coordinates.y) {
        result_y == true;
    }
    std::cout << result_y << std::endl;
    bool result_direction = false;
    if (!(updated_future_direction ^ utils::Direction::up) & 0b11111111) {
        result_direction == true;
    }
    std::cout << result_direction << std::endl;

    resetState();

    return result_x & result_y & result_direction;
}

namespace {

TEST(MovingUpTest, Positive) { EXPECT_EQ(true, MovingUp(1)); }

}  // namespace