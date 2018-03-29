/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 09:36:56 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 11:14:41 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3){
    std::cout << "SC4V-TP <" << this->_name << "> activated!" << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
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

void ScavTrap::rangedAttack(std::string const & target) {
    std::cout << "SC4V-TP <" << this->_name << "> attacks <" << target << "> at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
    std::cout << "SC4V-TP <" << this->_name << "> attacks <" << target << "> at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    amount -= this->_armorDamageReduction;
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    std::cout << "SC4V-TP <" << this->_name << "> take " << amount << " points of Damage and as now " << this->_hitPoints << " hit points." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    if ((this->_hitPoints + amount) > (unsigned int)this->_maxHitPoints)
        amount = this->_maxHitPoints - this->_hitPoints;
    this->_hitPoints += amount;
    std::cout << "SC4V-TP <" << this->_name << "> repair for " << amount << " points and as now " << this->_hitPoints << " hit points." << std::endl;
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