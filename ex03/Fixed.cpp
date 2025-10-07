#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(const int var)
{
    value = var << fractional;
}

Fixed::Fixed(const float var)
{
    value = roundf(var * (1 << fractional));
}

Fixed::Fixed(const Fixed &other)
{
    value = other.value;
}

Fixed &Fixed::operator=(const Fixed &other)
{
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
}

int Fixed::toInt(void) const
{
    return value >> fractional;
}

float Fixed::toFloat(void) const
{
    return (float)value / (1 << fractional);
}

bool Fixed::operator>(const Fixed &other) const
{
    return (this->value > other.value);
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->value < other.value);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (this->value >= other.value);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (this->value <= other.value);
}

bool Fixed::operator==(const Fixed &other) const
{
    return (this->value == other.value);
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (this->value != other.value);
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++(*this);
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --(*this);
    return tmp;
}


Fixed &Fixed::operator++()
{
    this->value++;
    return (*this);
}

Fixed &Fixed::operator--()
{
    this->value--;
    return (*this);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.value < b.value)
        return (a);
    else
        return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.value > b.value)
        return (a);
    else
        return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.value < b.value)
        return (a);
    else
        return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.value > b.value)
        return (a);
    else
        return (b);
}