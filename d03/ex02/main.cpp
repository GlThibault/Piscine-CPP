/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 09:36:54 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 13:50:08 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    FragTrap fragTrap("FragTrap");

    fragTrap.meleeAttack("Enemy1");
    fragTrap.rangedAttack("Enemy1");

    fragTrap.vaulthunter_dot_exe("Enemy1");
    fragTrap.vaulthunter_dot_exe("Enemy1");
    fragTrap.vaulthunter_dot_exe("Enemy1");
    fragTrap.takeDamage(30);
    fragTrap.vaulthunter_dot_exe("Enemy1");
    fragTrap.vaulthunter_dot_exe("Enemy1");

    fragTrap.beRepaired(40);
    fragTrap.beRepaired(40);
    fragTrap.takeDamage(50);
    fragTrap.takeDamage(60);
    fragTrap.takeDamage(50);
    
    ScavTrap scavTrap("ScavTrap");

    scavTrap.meleeAttack("Enemy2");
    scavTrap.rangedAttack("Enemy2");

    scavTrap.challengeNewcomer();
    scavTrap.challengeNewcomer();
    scavTrap.takeDamage(30);
    scavTrap.challengeNewcomer();

    scavTrap.beRepaired(40);
    scavTrap.beRepaired(40);
    scavTrap.takeDamage(50);
    scavTrap.takeDamage(60);
    scavTrap.takeDamage(50);

    return 0;
}