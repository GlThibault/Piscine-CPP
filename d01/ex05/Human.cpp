/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:06:20 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 18:34:10 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
    return;
}

Human::~Human(void) {
    return;
}

std::string const Human::identify(void) {
    return brain.identify();
}

Brain const &Human::getBrain(void) {
    return brain;
}