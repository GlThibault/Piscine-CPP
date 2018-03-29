/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 09:36:56 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 11:48:23 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;

    std::cout << "SC4V-TP <" << this->_name << "> activated!" << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src._name) {
    *this = src;
    return;
}

ScavTrap::~ScavTrap(void) {                                     
    std::cout << "SC4V-TP <" << this->_name << "> deactivated!" << std::endl;
    return;
}

ScavTrap &      ScavTrap::operator=(ScavTrap const & rhs) {
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

void ScavTrap::challengeNewcomer(void) {
    if (this->_energyPoints >= 25) {
        this->_energyPoints -= 25;
        std::string challenges[6] = {"Reach Crisis Scar","Find Signal Source","Kill RedBelly","Find CU5TM-TP","Confront the Meriff","Get to Springs"};
        std::cout << "SC4V-TP <" << this->_name << "> start the challenge <" << challenges[rand()%6] << ">!" << std::endl;
    } else {
        std::cout <<"SC4V-TP <" << this->_name << "> does not have enough energy points to start a challenge." << std::endl;
    }
}