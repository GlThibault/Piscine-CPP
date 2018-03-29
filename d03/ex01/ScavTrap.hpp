/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 09:36:55 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 11:20:15 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap(void);

        ScavTrap &  operator=(ScavTrap const & rhs);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewcomer(void);

    private:
        std::string _name;
        int _hitPoints,
            _maxHitPoints,
            _energyPoints,
            _maxEnergyPoints,
            _level,
            _meleeAttackDamage,
            _rangedAttackDamage,
            _armorDamageReduction;
};

#endif
