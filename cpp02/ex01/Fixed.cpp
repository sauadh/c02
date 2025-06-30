/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuneer <smuneer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:30:03 by smuneer           #+#    #+#             */
/*   Updated: 2025/06/30 11:30:04 by smuneer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::frac_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fp = 0;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    fp = num << frac_bits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    fp = roundf(num * (1 << frac_bits));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &ass)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &ass)
        this->fp = ass.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void)const
{
    return((float)fp/(float)(1 << frac_bits));
}

int Fixed::toInt(void)const
{
    return(fp >> frac_bits);
}

int Fixed::getRawBits(void)const
{
    return (fp);
}

void Fixed::setRawBits(int const raw)
{
    fp = raw;
}


std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return (o);
}