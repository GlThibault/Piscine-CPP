/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:11:57 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 14:57:15 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " <<this->_name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & src) {
	*this = src;
    std::cout << "Some random victim called " <<this->_name << " just popped !" << std::endl;
}

Victim &	Victim::operator=(Victim const & rhs) {
	this->_name = rhs._name;
	return *this;
}

Victim::~Victim(void) {
    std::cout << "Victim " <<this->_name << " just died for no apparent reason !" << std::endl;
}

void        Victim::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName(void) const {
    return this->_name;
}

std::ostream &     operator<<(std::ostream & o, Victim const & rhs) {
    o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
    return o;
}