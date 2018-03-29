/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:58:34 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 18:07:23 by tglandai         ###   ########.fr       */
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
    std::cout << n << std::endl;
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

int                 Fixed::getRawBits(void) const {
    return this->_n;
}

void                Fixed::setRawBits(int const raw) {
    this->_n = raw;
}

float               Fixed::toFloat(void) const {
    return ((float)this->_n / (1 << this->_fractBits));
}

int                 Fixed::toInt(void) const {
    return (getRawBits() >> this->_fractBits);
}

Fixed &             Fixed::max(Fixed & a, Fixed & b) {
    if (a > b)
        return a;
    return b;
}

const Fixed &       Fixed::max(Fixed const & a, Fixed const & b) {
    if (a > b)
        return a;
    return b;
}

Fixed &             Fixed::min(Fixed & a, Fixed & b) {
    if (a < b)
        return a;
    return b;
}

const Fixed &       Fixed::min(Fixed const & a, Fixed const & b) {
    if (a < b)
        return a;
    return b;
}

Fixed &             Fixed::operator=(Fixed const & rhs) {
    this->_n = rhs.getRawBits();
    return *this;
}

Fixed               Fixed::operator+(Fixed const & rhs) const {
    return Fixed((rhs.getRawBits() + this->getRawBits()) >> this->_fractBits);
}

Fixed               Fixed::operator-(Fixed const & rhs) const {
    return Fixed((rhs.getRawBits() - this->getRawBits()) >> this->_fractBits);
}

Fixed               Fixed::operator*(Fixed const & rhs) const {
    Fixed tmp;
    tmp._n = (this->_n * rhs._n) >> this->_fractBits;
    return tmp;
}

Fixed               Fixed::operator/(Fixed const & rhs) const {
    Fixed tmp;
    tmp._n = (this->_n / rhs._n) << this->_fractBits;
    return tmp;
}

Fixed &             Fixed::operator++(void) {
    this->_n++;
    return *this;
}

Fixed               Fixed::operator++(int) {
    Fixed tmp(*this);
    this->_n++;
    return tmp;
}

Fixed &             Fixed::operator--(void) {
    this->_n--;
    return *this;
}

Fixed               Fixed::operator--(int) {
    Fixed tmp(*this);
    this->_n--;
    return tmp;
}

bool                Fixed::operator>(Fixed const & rhs) const {
    return (this->getRawBits() > rhs.getRawBits());
}

bool                Fixed::operator>=(Fixed const & rhs) const {
    return (this->getRawBits() >= rhs.getRawBits());
}

bool                Fixed::operator<(Fixed const & rhs) const {
    return (this->getRawBits() < rhs.getRawBits());
}

bool                Fixed::operator<=(Fixed const & rhs) const {
    return (this->getRawBits() <= rhs.getRawBits());
}

bool                Fixed::operator==(Fixed const & rhs) const {
    return (this->getRawBits() == rhs.getRawBits());
}

bool                Fixed::operator!=(Fixed const & rhs) const {
    return (this->getRawBits() != rhs.getRawBits());
}

std::ostream &      operator<<(std::ostream & o, Fixed const & rhs) {
    o << rhs.toFloat();
    return o;
}