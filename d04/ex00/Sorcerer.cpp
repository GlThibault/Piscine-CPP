/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:11:55 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 14:54:56 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
	*this = src;
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;	
}

Sorcerer &	Sorcerer::operator=(Sorcerer const & rhs) {
	this->_name = rhs._name;
	this->_title = rhs._title;
	return *this;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}


void	Sorcerer::polymorph(Victim const & src) const {
	src.getPolymorphed();
}

void	Sorcerer::polymorph(Peon const & src) const {
	src.getPolymorphed();
}

std::string Sorcerer::getName(void) const {
    return this->_name;
}

std::string Sorcerer::getTitle(void) const {
    return this->_title;
}
 
std::ostream &     operator<<(std::ostream & o, Sorcerer const & rhs) {
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!" << std::endl;
    return o;
}