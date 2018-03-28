/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:07:03 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 18:55:15 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->type = type;
    return;
}

Weapon::~Weapon(void) {
    return;
}

std::string const &Weapon::getType(void) {
    return type;
}

void Weapon::setType(std::string type) {
    this->type = type;
    return;
}