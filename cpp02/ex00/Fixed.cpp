#include "Fixed.hh"

Fixed::Fixed()
{
	fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& fixe)
{
	std::cout << "Copy constructor called" << std::endl;
	fixed_point = fixe.fixed_point;
	fixe.getRawBits();
}

Fixed& Fixed::operator=(Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	fixed_point = raw;
}
