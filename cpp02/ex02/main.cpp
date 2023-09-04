#include "Fixed.hh"

std::ostream& operator << (std::ostream& output, const Fixed& fixed)
{
    output << fixed.getRawBits() / (float)256;
    return output;
}

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}
