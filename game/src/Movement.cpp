#include<Movement.hpp>

using namespace _movement;

Movement::Movement(utils::Coordinate coordinate, uint8_t direction) {
    setX(coordinate.x);
    setY(coordinate.y);
    setDirection(direction);

    setFutureX(coordinate.x);
    setFutureY(coordinate.y);
    setFutureDirection(direction);
}

void Movement::setCoordinate(utils::Coordinate coordinate) {
    setX(coordinate.x);
    setY(coordinate.y);
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
void Movement::setFutureCoordinate(utils::Coordinate coordinate) {
    setFutureX(coordinate.x);
    setFutureY(coordinate.y);
}
void Movement::setFutureDirection(uint8_t direction) {
    futureDirection_ = direction;
}
void Movement::setFutureX(int16_t X) {
    futureCoordinate_.x = X;
}
void Movement::setFutureY(int16_t Y) {
    futureCoordinate_.y = Y;
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
utils::Coordinate Movement::getFutureCoordinate() {
    return futureCoordinate_;
}
uint8_t Movement::getFutureDirection() {
    return futureDirection_;
}
int16_t Movement::getFutureX() {
    return futureCoordinate_.x;
}
int16_t Movement::getFutureY() {
    return futureCoordinate_.y;
}

void Movement::moveUp() {
    futureCoordinate_.y++;
    setFutureDirection(utils::Direction::up);
}
void Movement::moveDown() {
    futureCoordinate_.y--;
    setFutureDirection(utils::Direction::down);
}
void Movement::moveRight() {
    futureCoordinate_.x++;
    setFutureDirection(utils::Direction::right);
}
void Movement::moveLeft() {
    futureCoordinate_.x--;
    setFutureDirection(utils::Direction::left);
}

void Movement::updateStatus() {
    setCoordinate(futureCoordinate_);
    setDirection(futureDirection_);
}