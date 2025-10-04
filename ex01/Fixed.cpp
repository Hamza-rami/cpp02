#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int var)
{
    std::cout << "Int constructor called\n";
    value = var << fractional;
}

Fixed::Fixed(const float var)
{
    std::cout << "Float constructor called\n";
    value = roundf(var * (1 << fractional));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called\n";
    value = other.value;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
        value = other.value;
    return *this;
}


std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::toInt(void) const
{
    return value >> fractional;
}

float Fixed::toFloat(void) const
{
    return (float)value / (1 << fractional);
}
