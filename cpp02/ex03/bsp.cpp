/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuneer <smuneer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:32:49 by smuneer           #+#    #+#             */
/*   Updated: 2025/06/30 14:32:50 by smuneer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float area (const Point p1, const Point p2, const Point p3)
{
    float area;

    area = ( (p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())) 
                + (p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())) + 
            (p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) ) / 2;

    if (area >= 0)
        return (area);
    else
        return (area * -1);
}

 bool bsp( Point const a, Point const b, Point const c, Point const point)
 {
    float d0, d1, d2, d3;
    bool ret;

    ret = false;
    d0 = area(a, b, c);
    d1 = area(point, a, b);
    d2 = area(point, b, c);
    d3 = area(point, a, c);

    if (d1==0 || d2 == 0 || d3 == 0)
        ret = false;
    else if (d1 + d2 + d3 == d0)
        ret = true;
    return (ret);
 }