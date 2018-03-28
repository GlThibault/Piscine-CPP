/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:07:03 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 19:00:24 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): {
    this->_name = name;
    this->_weapon = Weapon("default");
    return;
}

HumanB::~HumanB(void) {
    return;
}

void HumanB::attack(void) {
    std::cout << getName() << " attacks with his " << getWeapon() << ::std::endl;
}

Weapon HumanB::getWeapon(void) {
    return this->_weapon;
}

void HumanB::setWeapon(Weapon weapon) {
    this->_weapon = weapon;
    return;
}