/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 13:48:03 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 14:15:45 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;
    
    std::cout << "NINJ4-TP <" << this->_name << "> activated!" << std::endl;
    return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src._name) {
    *this = src;
    return;
}

NinjaTrap::~NinjaTrap(void) {
    std::cout << "NINJ4-TP <" << this->_name << "> deactivated!" << std::endl;
    return;
}

NinjaTrap &      NinjaTrap::operator=(NinjaTrap const & rhs) {
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

void NinjaTrap::ninjaShoebox(FragTrap const & target) {
    if (this->_energyPoints >= 5) {
        this->_energyPoints -= 5;
        std::cout << "NINJ4-TP <" << this->_name << "> just laugh at <" << target.getName() << ">." << std::endl;
    } else {
        std::cout <<"NINJ4-TP <" << this->_name << "> does not have enough energy points to attack." << std::endl;
    }
}

void NinjaTrap::ninjaShoebox(ScavTrap const & target) {
    if (this->_energyPoints >= 5) {
        this->_energyPoints -= 5;
        std::cout << "NINJ4-TP <" << this->_name << "> mock <" << target.getName() << ">." << std::endl;
    } else {
        std::cout <<"NINJ4-TP <" << this->_name << "> does not have enough energy points to attack." << std::endl;
    }
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & target) {
    if (this->_energyPoints >= 5) {
        this->_energyPoints -= 5;
        std::cout << "NINJ4-TP <" << this->_name << "> try to make contact with <" << target.getName() << ">." << std::endl;
    } else {
        std::cout <<"NINJ4-TP <" << this->_name << "> does not have enough energy points to attack." << std::endl;
    }
}

void NinjaTrap::ninjaShoebox(ClapTrap const & target) {
    if (this->_energyPoints >= 5) {
        this->_energyPoints -= 5;
        std::cout << "NINJ4-TP <" << this->_name << "> shove <" << target.getName() << ">." << std::endl;
    } else {
        std::cout <<"NINJ4-TP <" << this->_name << "> does not have enough energy points to attack." << std::endl;
    }
}