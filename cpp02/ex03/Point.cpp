/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuneer <smuneer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:06:22 by smuneer           #+#    #+#             */
/*   Updated: 2025/06/30 14:35:14 by smuneer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{
    
}

Point::Point(const float x, const float y): x(x), y(y)
{
    
}

Point::Point(const Point &copy): x(copy.getX()), y(copy.getY())
{
    
}
Point::~Point()
{
    
}

Point &Point::operator=(const Point &ass)
{   
    return (*this);
}

const Fixed &Point::getX(void)const
{
    return(this->x);
}

const Fixed &Point::getY(void)const
{
    return(this->y);
}

std::ostream  &operator<<(std::ostream &out, Point const &x)
{
    o << "x" << x.getX() << "y" << x.getY
}