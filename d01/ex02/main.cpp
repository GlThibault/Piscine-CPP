/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:10:20 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 16:56:12 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main(void) {
    Zombie *Stained = new Zombie("Stained Undead", "Runner");
    Zombie *Noxious = new Zombie("Noxious Plague", "Crawler");
    Zombie guiltless("Guiltless Division", "Ghoul");
    ZombieEvent zombieEvent;

    for (int i = 0; i < 5; i++) {
        Zombie *zombie = zombieEvent.randomChump();
        delete zombie;
    }
    
    Zombie *flock = zombieEvent.newZombie("Mindless Flock");
    
    Zombie bones("Fragile Bones", "Ghoul");
    
    flock->announce();
    zombieEvent.setZombieType(flock, "Runner");
    flock->announce();

    delete flock;
    delete Stained;
    delete Noxious;
    return 0;
}
