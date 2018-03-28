/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:07:03 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 19:57:06 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {
    return;
}

HumanB::~HumanB(void) {
    return;
}

void HumanB::attack(void) {
    std::cout << getName() << " attacks with his " << getWeapon().type << ::std::endl;
}

std::string HumanB::getName(void) {
    return this->_name;
}

Weapon HumanB::getWeapon(void) {
    return *(this->_weapon);
}

void HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
    return;
}