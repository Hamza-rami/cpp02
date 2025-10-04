#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int fractional;

public:
    Fixed();
    Fixed(const int var);
    Fixed(const float var);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();

    int toInt(void) const;
    float toFloat(void) const;
};

#endif
