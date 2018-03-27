/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:58:42 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 17:21:25 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int NbZombies) {
    Zombie *zombies = new Zombie[NbZombies];
    setZombies(zombies);
    announce(zombies, NbZombies);
    return;
}

ZombieHorde::~ZombieHorde(void) {
    Zombie *zombies = getZombies();
    delete [] zombies;
    return;
}

void ZombieHorde::announce(Zombie *zombies, int NbZombies) {
    for (int i = 0; i < NbZombies; i++)
    zombies[i].announce();
    return;
}

void ZombieHorde::setZombies(Zombie *zombies) {
    this->_zombies = zombies;
    return;
}

Zombie *ZombieHorde::getZombies(void) {
    return this->_zombies;
}