/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:49:05 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 17:16:06 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(80, "Rad Scorpion")
{
    std::cout << "* click click click *" << std::endl;
    *this = src;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
{
    if (this->_hp > 0)
    {
        this->_hp -= damage - 3;
        if (this->_hp < 0)
            this->_hp = 0;
    }
}
