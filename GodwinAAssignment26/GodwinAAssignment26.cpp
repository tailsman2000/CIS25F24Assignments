#include "point.hpp"

Point::Point(double x, double y) : x(x), y(y) {}

bool Point::operator==(const Point& other) const {
    return (x == other.x && y == other.y);
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}
