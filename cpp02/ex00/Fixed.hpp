/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuneer <smuneer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 09:43:53 by smuneer           #+#    #+#             */
/*   Updated: 2025/06/30 10:20:27 by smuneer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
class Fixed
{
    private:
        int     fp;
        static const int frac_bits;
    public:
    //constructor
        Fixed();
    //copy constructor
        Fixed(const Fixed &copy);
    //assignment
        Fixed &operator=(const Fixed &ass);
    //Destructor
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};



#endif