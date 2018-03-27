/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:20:40 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 16:56:41 by tglandai         ###   ########.fr       */
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
    return new Zombie(name, "Walker");
}

Zombie* ZombieEvent::randomChump(void) {
    std::string NameArray[10] = {"Faded Host","Awoken Vandal","Bloody Plague","Aberrant","Noxious Corrupter","Lament Swarm","Absent Taint","Thundering Undead","Skeletal Disgrace","Monstrous Destroyer"};
    return newZombie(NameArray[rand()%10]);
}