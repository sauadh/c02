# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int     fp;
        static const int frac_bits;
    public:
        Fixed();
        Fixed(const int num);
        Fixed(const float num);
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &ass);
        ~Fixed();
        bool operator>(Fixed const &fix)const;
        bool operator<(Fixed const &fix)const;
        bool operator>=(Fixed const &fix)const;
        bool operator<=(Fixed const &fix)const;
        bool operator==(Fixed const &fix)const;
        bool operator!=(Fixed const &fix)const;
        Fixed operator+(Fixed const &fix)const;
        Fixed operator-(Fixed const &fix)const;
        Fixed operator*(Fixed const &fix)const;
        Fixed operator/(Fixed const &fix)const;
        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        float toFloat (void) const;
        int toInt(void) const;
        static Fixed &min(Fixed &first, Fixed &sec);
        static const Fixed &min(Fixed const &first, Fixed const &sec);
        static Fixed &max(Fixed &first, Fixed &sec);
        static const Fixed &max(Fixed const &first, Fixed const &sec);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream  &operator<<(std::ostream &out, Fixed const &fix);



#endif