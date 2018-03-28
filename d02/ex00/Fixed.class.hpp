/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:58:35 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 13:13:43 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed {

    public:

        Fixed(void);
        Fixed(Fixed const & src);
        ~Fixed(void);

        Fixed &     operator=(Fixed const & rhs );

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

    private:
        int _n;
        static const int _fractBits = 8;
};

#endif