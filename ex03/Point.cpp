#include "Point.hpp"

Point::Point() : x(0), y(0) 
{}

Point::Point(float a, float b) : x(a), y(b) 
{}

Point::Point(const Point &other) : x(other.getx()), y(other.gety()) 
{}

Point &Point::operator=(const Point &other) 
{ 
    (void)other;
    return *this;
}


Point::~Point() 
{}

Fixed Point::getx() const 
{ 
    return x; 
}
Fixed Point::gety() const 
{ 
    return y; 
}

