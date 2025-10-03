#include "Fixed.hpp"


const int Fixed::fractional = 8;


Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    value = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called\n";
    this->value = other.value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
    {
        value = other.value;
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return value;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called\n";
    value = raw;
}