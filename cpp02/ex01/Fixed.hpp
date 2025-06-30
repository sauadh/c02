/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuneer <smuneer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:30:07 by smuneer           #+#    #+#             */
/*   Updated: 2025/06/30 11:33:16 by smuneer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    //constructor
        Fixed();
        Fixed(const int num);
        Fixed(const float num);
        
    //copy constructor
        Fixed(const Fixed &copy);
    //assignment
        Fixed &operator=(const Fixed &ass);
    //Destructor
        ~Fixed();
        float toFloat (void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream  &operator<<(std::ostream &out, Fixed const &fix);



#endif