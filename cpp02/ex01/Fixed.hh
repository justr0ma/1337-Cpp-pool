#include <cmath>
#include <iostream>

class Fixed
{
private:
    int fixed_point;
    static const int nb_fract = 8;
public:
    Fixed();
    Fixed(const Fixed& fix);
    Fixed(const int ipoint);
    Fixed(const float fpoint);
    ~Fixed();
    Fixed& operator=(const Fixed& fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};
