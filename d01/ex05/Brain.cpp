/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:07:03 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 18:31:57 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    return;
}

Brain::~Brain(void) {
    return;
}

std::string	Brain::identify(void) const
{
	std::stringstream	str;

	str << this;
	return (str.str());
}
