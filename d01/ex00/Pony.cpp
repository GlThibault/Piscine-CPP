/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:04:38 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 15:06:23 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(void) {
    std::cout << "Apparition of a pony" << std::endl;
    return;
}

Pony::~Pony(void) {
    std::cout << "Death of a pony" << std::endl;
    return;
}

void Pony::setName(std::string str) {
    this->_name = str;
    return ;
}

std::string Pony::getName(void) {
    return (this->_name);
}