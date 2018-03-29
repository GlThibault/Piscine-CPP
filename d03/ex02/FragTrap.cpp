/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 09:36:56 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 11:48:17 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    
    std::cout << "FR4G-TP <" << this->_name << "> activated!" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src._name) {
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

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if (this->_energyPoints >= 25) {
        this->_energyPoints -= 25;
        std::string attacks[7] = {"Miniontrap","Meat Unicycle","Funzerker","Mechromagician","Shhhh... Trap!","Blight Bot","Rubber Ducky"};
        std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> with " << attacks[rand()%7] << ", causing " << 25 << " points of damage!" << std::endl;
    } else {
        std::cout <<"FR4G-TP <" << this->_name << "> does not have enough energy points to attack." << std::endl;
    }
}