/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuneer <smuneer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:34:11 by smuneer           #+#    #+#             */
/*   Updated: 2025/06/30 13:09:08 by smuneer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c(3.5f);
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    // std::cout << Fixed::min( a, b ) << std::endl;
    // std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
    // std::cout << "min(b, c) = " << Fixed::min(b, c) << std::endl;
    // std::cout << "min(a, c) = " << Fixed::min(a, c) << std::endl;

    // std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
    // std::cout << "max(b, c) = " << Fixed::max(b, c) << std::endl;
    // std::cout << "max(a, c) = " << Fixed::max(a, c) << std::endl;
    return 0;
}
