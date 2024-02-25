#include<Movement.hpp>

using namespace _movement;

Movement::Movement(utils::Coordinate coordinate, uint8_t direction) {
    coordinate_.x = coordinate.x;
    coordinate_.y = coordinate.y;
    direction_ = direction;
}

void Movement::setCoordinate(utils::Coordinate coordinate) {
    coordinate_.x = coordinate.x;
    coordinate_.y = coordinate.y;
}
void Movement::setDirection(uint8_t direction) {
    direction_ = direction;
}
void Movement::setX(int16_t X) {
    coordinate_.x = X;
}
void Movement::setY(int16_t Y) {
    coordinate_.y = Y;
}

utils::Coordinate Movement::getCoordinate() {
    return coordinate_;
}
uint8_t Movement::getDirection() {
    return direction_;
}
int16_t Movement::getX() {
    return coordinate_.x;
}
int16_t Movement::getY() {
    return coordinate_.y;
}

void Movement::moveUp() {
    coordinate_.y++;
}
void Movement::moveDown() {
    coordinate_.y--;
}
void Movement::moveRight() {
    coordinate_.x++;
}
void Movement::moveLeft() {
    coordinate_.x--;
}