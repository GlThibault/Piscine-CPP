/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:20:40 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 16:51:05 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
    return;
}

ZombieEvent::~ZombieEvent(void) {
    return;
}

void ZombieEvent::setZombieType(Zombie *zombie, std::string type) {
    zombie->setType(type);
    return;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    return new Zombie(name, "Walkers");
}

Zombie* ZombieEvent::randomChump(void) {
    std::string NameArray[10] = {"The Faded Host","The Awoken Vandals","The Bloody Plague","The Aberrant Division","The Noxious Corrupters","The Lament Swarm","The Absent Taint","The Thundering Undead","The Skeletal Disgrace","The Monstrous Destroyers"};
    return newZombie(NameArray[rand()%10]);
}