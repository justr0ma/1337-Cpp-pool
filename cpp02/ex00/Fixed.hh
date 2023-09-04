#include <iostream>

class Fixed
{
private:
    int  fixed_point;
    static const int nb_fract = 8;
public:
    Fixed();
    Fixed(Fixed& fix);
    Fixed& operator=(Fixed &fixed);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
