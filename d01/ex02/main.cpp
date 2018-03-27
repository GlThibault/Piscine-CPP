/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:10:20 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 16:51:40 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main(void) {
    Zombie *Stained = new Zombie("The Stained Undead", "Runners");
    Zombie *Noxious = new Zombie("The Noxious Plague", "Crawlers");
    Zombie guiltless("The Guiltless Division", "Ghouls");
    ZombieEvent zombieEvent;

    for (int i = 0; i < 5; i++) {
        Zombie *zombie = zombieEvent.randomChump();
        delete zombie;
    }
    
    Zombie *flock = zombieEvent.newZombie("The Mindless Flock");
    
    Zombie bones("The Fragile Bones", "Ghouls");
    
    flock->announce();
    zombieEvent.setZombieType(flock, "Runners");
    flock->announce();

    delete flock;
    delete Stained;
    delete Noxious;
    return 0;
}
