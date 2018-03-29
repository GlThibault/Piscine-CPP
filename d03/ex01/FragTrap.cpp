/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 09:36:56 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 10:54:44 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5){
    std::cout << "FR4G-TP <" << this->_name << "> activated!" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const & src) {
    *this = src;
    return;
}

FragTrap::~FragTrap(void) {
    std::cout << "FR4G-TP <" << this->_name << "> deactivated!" << std::endl;
    return;
}

FragTrap &      FragTrap::operator=(FragTrap const & rhs) {
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

void FragTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    amount -= this->_armorDamageReduction;
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    std::cout << "FR4G-TP <" << this->_name << "> take " << amount << " points of Damage and as now " << this->_hitPoints << " hit points." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    if ((this->_hitPoints + amount) > (unsigned int)this->_maxHitPoints)
        amount = this->_maxHitPoints - this->_hitPoints;
    this->_hitPoints += amount;
    std::cout << "FR4G-TP <" << this->_name << "> repair for " << amount << " points and as now " << this->_hitPoints << " hit points." << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if (this->_energyPoints >= 25) {
        this->_energyPoints -= 25;
        std::string attacks[7] = {"Miniontrap","Meat Unicycle","Funzerker","Mechromagician","Shhhh... Trap!","Blight Bot","Rubber Ducky"};
        std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> with " << attacks[rand()%7] << ", causing " << 25 << " points of damage!" << std::endl;
    } else {
        std::cout <<"FR4G-TP <" << this->_name << "> does not have enough energy points to attack." << std::endl;
    }
}