/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:11:44 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 17:16:37 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
    std::string NameArray[10] = {"Faded Host","Awoken Vandal","Bloody Plague","Aberrant","Noxious Corrupter","Lament Swarm","Absent Taint","Thundering Undead","Skeletal Disgrace","Monstrous Destroyer"};
    setName(NameArray[rand()%10]);
    setType("Walkers");
    return;
}

Zombie::~Zombie(void) {
    std::cout << "Zombie Death" << std::endl;
    return;
}

void Zombie::announce(void) {
    std::cout << "<" << getName() << " (" << getType() << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::getType(void) {
    return this->_type;
}

void Zombie::setType(std::string type) {
    this->_type = type;
    return;
}

std::string Zombie::getName(void) {
    return this->_name;
}

void Zombie::setName(std::string name) {
    this->_name = name;
    return;
}
