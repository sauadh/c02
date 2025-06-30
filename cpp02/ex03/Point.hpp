/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuneer <smuneer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 13:58:37 by smuneer           #+#    #+#             */
/*   Updated: 2025/06/30 14:29:13 by smuneer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point
{
    private:
        Fixed const     x;
        Fixed const     y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &copy);
        Point &operator=(const Point &ass);
        ~Point();
        const Fixed &getX(void) const;
        const Fixed &getY(void) const;
};

std::ostream  &operator<<(std::ostream &out, Point const &x);



#endif