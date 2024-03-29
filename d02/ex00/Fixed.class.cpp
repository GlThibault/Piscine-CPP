/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:58:34 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 13:13:38 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void): _n(0) {

    std::cout << "Default Constructor called" << std::endl;

    return;
}

Fixed::Fixed(Fixed const & src) {

    std::cout << "Copy Constructor called" << std::endl;

    *this = src;
    return;
}

Fixed::~Fixed(void) {

    std::cout << "Destructor called" << std::endl;

    return;
}

int Fixed::getRawBits(void) const {

    std::cout << "getRawBits member function called" << std::endl;

    return this->_n;
}

void Fixed::setRawBits(int const raw) {

    this->_n = raw;
}

Fixed &     Fixed::operator=(Fixed const & rhs) {

    std::cout << "Assignation operator called" << std::endl;
    
    this->_n = rhs.getRawBits();
    return *this;
}