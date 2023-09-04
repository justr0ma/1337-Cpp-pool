#include "Fixed.hh"

Fixed::Fixed()
{
	fixed_point = 0;
}

Fixed::Fixed(const Fixed& fix)
{
	fixed_point = fix.fixed_point;
	fix.getRawBits();
}

Fixed::Fixed(const int ipoint)
{
	fixed_point = ipoint * (float)256;
}

Fixed::Fixed(const float fpoint)
{
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

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const
{
	return (fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	fixed_point = raw;
}

float Fixed::operator ++ () 
{
    this->setRawBits(this->getRawBits() + roundf(0.00390625 * (float)256));
    return fixed_point / (float)256;
}
float Fixed::operator -- ()
{
    this->setRawBits(this->getRawBits() - roundf(0.00390625 * (float)256));
    return fixed_point / (float)256;
}
float Fixed::operator ++ (int)
{
    int a = fixed_point;
    this->setRawBits(this->getRawBits() + roundf(0.00390625 * (float)256));
    return a / (float)256;
}
float Fixed::operator -- (int)
{
    int a = fixed_point;
    this->setRawBits(this->getRawBits() - roundf(0.00390625 * (float)256));
    return a / (float)256;
}
float Fixed::operator + (const Fixed& b)
{
    return (fixed_point + b.getRawBits()) / (float)256;
}
float Fixed::operator - (const Fixed& b)
{
    return (fixed_point - b.getRawBits()) / (float)256;
}
float Fixed::operator * (const Fixed& b) const
{
    return ((fixed_point/ (float)256) * (b.getRawBits()/ (float)256));
}
float Fixed::operator / (const Fixed& b)
{
    return ((fixed_point/ (float)256) / (b.getRawBits()/ (float)256));
}
bool Fixed::operator == (const Fixed& b)
{
    if (fixed_point == b.getRawBits())
        return 1;
    return 0;
}
bool Fixed::operator < (const Fixed& b)
{
    if (fixed_point < b.getRawBits())
        return 1;
    return 0;
}
bool Fixed::operator > (const Fixed& b)
{
    if (fixed_point > b.getRawBits())
        return 1;
    return 0;
}
bool Fixed::operator <= (const Fixed& b)
{
    if (fixed_point <= b.getRawBits())
        return 1;
    return 0;
}
bool Fixed::operator >= (const Fixed& b)
{
    if (fixed_point >= b.getRawBits())
        return 1;
    return 0;
}
bool Fixed::operator != (const Fixed& b)
{
    if (fixed_point != b.getRawBits())
        return 1;
    return 0;
}

Fixed& Fixed::min(Fixed& f, Fixed& t)
{
    if (t.getRawBits() < f.getRawBits())
        return t;
    return f;
}
const Fixed& Fixed::min(const Fixed& f,  const Fixed& t)
{
    if (t.getRawBits() < f.getRawBits())
        return t;
    return f;
}
Fixed& Fixed::max(Fixed& f, Fixed& t)
{
    if (t.getRawBits() > f.getRawBits())
        return t;
    return f;
}
const Fixed& Fixed::max(const Fixed& f,  const Fixed& t)
{
    if (t.getRawBits() > f.getRawBits())
        return t;
    return f;
}
