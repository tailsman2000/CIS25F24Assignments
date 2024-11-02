#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

struct Point {
    double x;
    double y;

    Point(double x = 0.0, double y = 0.0);

    bool operator==(const Point& other) const;
    
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};

#endif // POINT_HPP
