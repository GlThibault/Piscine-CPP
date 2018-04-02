/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:11:52 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 14:55:00 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog" << std::endl;
}

Peon::Peon(Peon const & src) : Victim(src._name) {
	*this = src;
    std::cout << "Zog zog" << std::endl;
}

Peon &	Peon::operator=(Peon const & rhs) {
	this->_name = rhs._name;
	return *this;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
}

void        Peon::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}

std::ostream &     operator<<(std::ostream & o, Peon const & rhs) {
    o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
    return o;
}