/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 09:36:54 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 10:57:22 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    FragTrap fragTrap("42");

    fragTrap.meleeAttack("21");
    fragTrap.rangedAttack("21");

    fragTrap.vaulthunter_dot_exe("21");
    fragTrap.vaulthunter_dot_exe("21");
    fragTrap.vaulthunter_dot_exe("21");
    fragTrap.takeDamage(30);
    fragTrap.vaulthunter_dot_exe("21");
    fragTrap.vaulthunter_dot_exe("21");

    fragTrap.beRepaired(40);
    fragTrap.beRepaired(40);
    fragTrap.takeDamage(50);
    fragTrap.takeDamage(60);
    fragTrap.takeDamage(50);

    return 0;
}