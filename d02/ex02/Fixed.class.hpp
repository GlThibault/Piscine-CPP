/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:58:35 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 18:07:32 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed {

    public:

        Fixed(void);
        Fixed(const int n);
        Fixed(const float n);
        Fixed(Fixed const & src);
        ~Fixed(void);

        static Fixed &          max(Fixed & a, Fixed & b);
        static const Fixed &    max(Fixed const & a, Fixed const & b);
        static Fixed &          min(Fixed & a, Fixed & b);
        static const Fixed &    min(Fixed const & a, Fixed const & b);

        Fixed &     operator=(Fixed const & rhs );
        Fixed       operator+(Fixed const & rhs ) const;
        Fixed       operator-(Fixed const & rhs ) const;
        Fixed       operator*(Fixed const & rhs ) const;
        Fixed       operator/(Fixed const & rhs ) const;
        Fixed &     operator++(void);
        Fixed       operator++(int);
        Fixed &     operator--(void);
        Fixed       operator--(int);

        bool        operator>(Fixed const & rhs ) const;
        bool        operator>=(Fixed const & rhs ) const;
        bool        operator<(Fixed const & rhs ) const;
        bool        operator<=(Fixed const & rhs ) const;
        bool        operator==(Fixed const & rhs ) const;
        bool        operator!=(Fixed const & rhs ) const;

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

    private:
        int _n;
        static const int _fractBits = 8;
};

std::ostream &     operator<<(std::ostream & o, Fixed const & rhs );

#endif