/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:11:44 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 11:10:41 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
    announce();
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
