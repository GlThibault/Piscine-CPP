/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:28:06 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 17:16:48 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(Character const &src)
{
    *this = src;
}

Character::Character(std::string const &name) : _name(name), _ap(40)
{
}

Character &Character::operator=(Character const &rhs)
{
    this->_name = rhs._name;
    return *this;
}

void Character::recoverAP(void)
{
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
}

void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
    if (this->_weapon && this->_weapon->getAPCost() < this->_ap)
    {
        std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
        this->_ap -= this->_weapon->getAPCost();
        this->_weapon->attack();
        enemy->takeDamage(this->_weapon->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
    }
}

std::string const &Character::getName() const
{
    return this->_name;
}

std::string const &Character::getWeaponName() const
{
    return this->_weapon->getName();
}

int Character::getAP() const
{
    return this->_ap;
}

bool Character::hasWeapon() const
{
    if (this->_weapon)
        return true;
    else
        return false;
}

std::ostream &operator<<(std::ostream &o, Character const &rhs)
{
    if (rhs.hasWeapon())
        o << rhs.getName() << " has " << rhs.getAP() << " AP and wiels a " << rhs.getWeaponName() << std::endl;
    else
        o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
    return o;
}
