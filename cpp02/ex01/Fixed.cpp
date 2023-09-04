#include "Fixed.hh"

Fixed::Fixed()
{
	fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::Fixed(const int ipoint)
{
    std::cout << "Int constructor called" << std::endl;
	fixed_point = ipoint * (float)(256);
}

Fixed::Fixed(const float fpoint)
{
    std::cout << "Float constructor called" << std::endl;
	fixed_point = roundf(fpoint * (float)256);
}

float Fixed::toFloat( void ) const
{
	return fixed_point / (float)256;
}

int Fixed::toInt( void ) const
{
	return fixed_point / (float)256;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point);
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point = fixed.getRawBits();
	return *this;
}

void Fixed::setRawBits( int const raw )
{
	fixed_point = raw;
}
