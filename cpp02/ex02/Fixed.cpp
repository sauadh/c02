/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuneer <smuneer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:34:57 by smuneer           #+#    #+#             */
/*   Updated: 2025/06/30 13:07:53 by smuneer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::frac_bits = 8;

Fixed::Fixed()
{
    fp = 0;
}

Fixed::Fixed(const int num)
{
    fp = num << frac_bits;
}

Fixed::Fixed(const float num)
{
    fp = roundf(num * (1 << frac_bits));
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &ass)
{
    if (this != &ass)
        this->fp = ass.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
}


bool Fixed::operator>(Fixed const &fix)const
{
    return (this->toFloat() < fix.toFloat());
}

bool Fixed::operator>=(Fixed const &fix)const
{
    return (this->toFloat() >= fix.toFloat());
}

bool Fixed::operator<(Fixed const &fix)const
{
    return (this->toFloat() < fix.toFloat());
}

bool Fixed::operator<=(Fixed const &fix)const
{
    return (this->toFloat() <= fix.toFloat());
}

bool Fixed::operator==(Fixed const &fix)const
{
    return (this->toFloat() == fix.toFloat());
}

bool Fixed::operator!=(Fixed const &fix)const
{
    return (this->toFloat() != fix.toFloat());
}

Fixed Fixed::operator*(Fixed const &fix)const
{
    return (this->toFloat() * fix.toFloat());
}

Fixed Fixed::operator+(Fixed const &fix)const
{
    return (this->toFloat() + fix.toFloat());
}

Fixed Fixed::operator-(Fixed const &fix)const
{
    return (this->toFloat() - fix.toFloat());
}

Fixed Fixed::operator/(Fixed const &fix)const
{
    return (this->toFloat() / fix.toFloat());
}

Fixed Fixed::operator++()
{
    this->fp++;
    return (*this);
}

Fixed Fixed::operator--()
{
    this->fp--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed t = *this;
    ++this->fp;
    return (t);
}

Fixed Fixed::operator--(int)
{
    Fixed t = *this;
    --this->fp;
    return (t);
}

Fixed &Fixed::min(Fixed &first, Fixed &sec)
{
    if (first.toFloat() <= sec.toFloat())
        return (first);
    return (sec);
}

const Fixed &Fixed::min(Fixed const &first, Fixed const &sec)
{
    if (first.toFloat() <= sec.toFloat())
        return (first);
    return (sec);
}

Fixed &Fixed::max(Fixed &first, Fixed &sec)
{
    if (first.toFloat() >= sec.toFloat())
        return (first);
    return (sec);
}

const Fixed &Fixed::max(Fixed const &first, Fixed const &sec)
{
    if (first.toFloat() >= sec.toFloat())
        return (first);
    return (sec);
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