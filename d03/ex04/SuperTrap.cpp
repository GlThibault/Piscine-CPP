/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 14:17:33 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 18:00:00 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name) {
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    
    std::cout << "SUPER-TP <" << this->_name << "> activated!" << std::endl;
    return;
}

SuperTrap::SuperTrap(SuperTrap const & src) : ClapTrap(src._name) {
    *this = src;
    return;
}

SuperTrap::~SuperTrap(void) {
    std::cout << "SUPER-TP <" << this->_name << "> deactivated!" << std::endl;
    return;
}

SuperTrap &      SuperTrap::operator=(SuperTrap const & rhs) {
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_maxHitPoints = rhs._maxHitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_maxEnergyPoints = rhs._maxEnergyPoints;
    this->_level = rhs._level;
    this->_meleeAttackDamage = rhs._meleeAttackDamage;
    this->_rangedAttackDamage = rhs._rangedAttackDamage;
    this->_armorDamageReduction = rhs._armorDamageReduction;
    return *this;
}

void SuperTrap::rangedAttack(std::string const &target) {
	return (NinjaTrap::meleeAttack(target));
}

void SuperTrap::meleeAttack(std::string const &target) {
	return (FragTrap::rangedAttack(target));
}
