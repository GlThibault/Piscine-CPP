/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 20:46:54 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 21:01:08 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
	std::cout << "Melee attack on " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) {
	std::cout << "Ranged attack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
	std::cout << "Intimidating shout on " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
	void (Human::*attacks[3])(std::string const & t) = { &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout };
	std::string attackNames[3] = { "meleeAttack", "rangedAttack", "intimidatingShout" };
	for (int i = 0; i < 3; i++) {
		if (attackNames[i] == action_name)
			(this->*attacks[i])(target);
	}
}