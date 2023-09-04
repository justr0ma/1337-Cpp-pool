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
    float operator ++ () ;
    float operator -- ();
    float operator ++ (int);
    float operator -- (int);
    float operator + (const Fixed& b);
    float operator - (const Fixed& b);
    float operator * (const Fixed& b) const;
    float operator / (const Fixed& b);
    bool operator == (const Fixed& b);
    bool operator < (const Fixed& b);
    bool operator > (const Fixed& b);
    bool operator <= (const Fixed& b);
    bool operator >= (const Fixed& b);
    bool operator != (const Fixed& b);
    static Fixed& min(Fixed& f, Fixed& t);
    static const Fixed& min(const Fixed& f, const Fixed& t);
    static Fixed& max(Fixed& f, Fixed& t);
    static const Fixed& max(const Fixed& f, const Fixed& t);

};
