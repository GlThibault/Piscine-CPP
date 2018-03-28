/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:07:03 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 16:27:21 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon) {
    return;
}

HumanA::~HumanA(void) {
    return;
}

void HumanA::attack(void) {
    std::cout << getName() << " attacks with his " << getWeapon().type << ::std::endl;
}

std::string HumanA::getName(void) {
    return this->_name;
}

Weapon HumanA::getWeapon(void) {
    return this->_weapon;
}

void HumanA::setWeapon(Weapon weapon) {
    this->_weapon = weapon;
    return;
}