/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 11:16:10 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 13:42:50 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(100), _maxHitPoints(100), _level(1) {
    std::cout << "CL4P-TP <" << this->_name << "> created!" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
    *this = src;
    return;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "CL4P-TP <" << this->_name << "> destructed!" << std::endl;
    return;
}

ClapTrap &      ClapTrap::operator=(ClapTrap const & rhs) {
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

void ClapTrap::rangedAttack(std::string const & target) {
    std::cout << "CL4P-TP <" << this->_name << "> attacks <" << target << "> at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
    std::cout << "CL4P-TP <" << this->_name << "> attacks <" << target << "> at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    amount -= this->_armorDamageReduction;
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    std::cout << "CL4P-TP <" << this->_name << "> take " << amount << " points of Damage and as now " << this->_hitPoints << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if ((this->_hitPoints + amount) > (unsigned int)this->_maxHitPoints)
        amount = this->_maxHitPoints - this->_hitPoints;
    this->_hitPoints += amount;
    std::cout << "CL4P-TP <" << this->_name << "> repair for " << amount << " points and as now " << this->_hitPoints << " hit points." << std::endl;
}