/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 09:36:54 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 18:01:11 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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

    NinjaTrap ninjaTrap("NinjaTrap");

    ninjaTrap.meleeAttack("Enemy3");
    ninjaTrap.rangedAttack("Enemy3");

    ninjaTrap.ninjaShoebox(fragTrap);
    ninjaTrap.takeDamage(30);
    ninjaTrap.ninjaShoebox(scavTrap);
    ninjaTrap.ninjaShoebox(ninjaTrap);

    ninjaTrap.beRepaired(40);
    ninjaTrap.beRepaired(40);
    ninjaTrap.takeDamage(50);
    ninjaTrap.takeDamage(60);
    ninjaTrap.takeDamage(50);

    SuperTrap superTrap("SuperTrap");

    superTrap.meleeAttack("Enemy3");
    superTrap.rangedAttack("Enemy3");

    superTrap.ninjaShoebox(fragTrap);
    superTrap.takeDamage(30);
    superTrap.ninjaShoebox(scavTrap);
    superTrap.ninjaShoebox(ninjaTrap);
    superTrap.ninjaShoebox(superTrap);

    superTrap.beRepaired(40);
    superTrap.beRepaired(40);
    superTrap.takeDamage(50);
    superTrap.takeDamage(60);
    superTrap.takeDamage(50);
    superTrap.vaulthunter_dot_exe("Enemy1");
    superTrap.vaulthunter_dot_exe("Enemy1");
    superTrap.vaulthunter_dot_exe("Enemy1");
    superTrap.takeDamage(30);
    superTrap.vaulthunter_dot_exe("Enemy1");
    superTrap.vaulthunter_dot_exe("Enemy1");
    return 0;
}