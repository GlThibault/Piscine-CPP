/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:11:54 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 14:53:19 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(std::string name);
    Peon(Peon const & src);
    Peon &operator=(Peon const & rhs);
    ~Peon();

    void getPolymorphed(void) const;
};

std::ostream &     operator<<(std::ostream & o, Peon const & rhs);

#endif // !PEON_HPP