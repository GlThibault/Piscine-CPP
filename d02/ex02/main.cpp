/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:46:02 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 15:21:15 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int 	main( void )
{
	Fixed a(10);
	Fixed b(2);

	// std::cout << "A = " << a << std::endl;
	// std::cout << "B = " << b << std::endl;
	// std::cout << "A + B = " << (a + b) << std::endl;
	// std::cout << "A - B = " << (a - b) << std::endl;
	// std::cout << "A * B = " << (a * b) << std::endl;
	std::cout << "A / B = " << (a / b) << std::endl;
	// if (a > b)
	// 	std::cout << "A > B" << std::endl;
	// if (a >= b)
	// 	std::cout << "A >= B" << std::endl;
	// if (b < a)
	// 	std::cout << "B < A" << std::endl;
	// if (b <= a)
	// 	std::cout << "B <= A" << std::endl;
	// if (b == a)
	// 	std::cout << "B == A" << std::endl;
	// if (b != a)
	// 	std::cout << "B != A" << std::endl;

    // Fixed c;
    Fixed const d( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << c << std::endl;
	// std::cout << ++c << std::endl;
	// std::cout << c << std::endl;
	// std::cout << c++ << std::endl;
	// std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	// std::cout << Fixed::max( c, d ) << std::endl;
	// std::cout << Fixed::min( c, d ) << std::endl;
	
	// std::cout << (--c) << std::endl;
	// std::cout << c << std::endl;
	// std::cout << (c--) << std::endl;
	// std::cout << c << std::endl;
	// std::cout << d << std::endl;

	return (0);
}
