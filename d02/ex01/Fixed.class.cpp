/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:58:34 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 15:00:58 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void): _n(0) {

    std::cout << "Default Constructor called" << std::endl;

    return;
}

Fixed::Fixed(const int n) {

    std::cout << "Int Constructor called" << std::endl;
	setRawBits(n << _fractBits);
    return;
}

Fixed::Fixed(const float n): _n(n) {

    std::cout << "Float Constructor called" << std::endl;
	setRawBits(roundf(n * (1 << _fractBits)));

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

    return this->_n;
}

void Fixed::setRawBits(int const raw) {

    this->_n = raw;
}

float Fixed::toFloat(void) const {
    return ((float)this->_n / (1 << this->_fractBits));
}

int Fixed::toInt(void) const {
    return getRawBits() >> _fractBits;
}

Fixed &     Fixed::operator=(Fixed const & rhs) {

    std::cout << "Assignation operator called" << std::endl;
    
    this->_n = rhs.getRawBits();
    return *this;
}

std::ostream &     operator<<(std::ostream & o, Fixed const & rhs) {

    o << rhs.toFloat();
    return o;
}