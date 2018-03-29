/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 09:04:01 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 09:32:17 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    Fixed c = 42;
    Fixed d = 12;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << c - d << std::endl;
    std::cout << c + d << std::endl;
    std::cout << c * d << std::endl;
    std::cout << c / d << std::endl;
    std::cout << c-- << std::endl;
    std::cout << c << std::endl;
    std::cout << ++d << std::endl;
    if (d <= c)
        std::cout << "d <= c" << std::endl;
    if (d >= c)
        std::cout << "d >= c" << std::endl;
    if (d == c)
        std::cout << "d == c" << std::endl;
    if (d != c)
        std::cout << "d != c" << std::endl;
    std::cout << Fixed::max(d, c) << std::endl;
    return 0;
}