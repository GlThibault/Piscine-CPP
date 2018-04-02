/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:58:52 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 17:00:52 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(AWeapon const &src) : _name(src._name), _apcost(src._apcost), _damage(src._damage)
{
    *this = src;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon &AWeapon::operator=(AWeapon const &rhs)
{
    this->_name = rhs._name;
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    return *this;
}

AWeapon::~AWeapon()
{
}

std::string const &AWeapon::getName() const
{
    return this->_name;
}

int AWeapon::getAPCost() const
{
    return this->_apcost;
}

int AWeapon::getDamage() const
{
    return this->_damage;
}
