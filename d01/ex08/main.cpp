/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 20:46:39 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 20:59:40 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void) {
    Human   human1,
            human2,
            human3;
    human1.action("meleeAttack", "human2");
    human2.action("rangedAttack", "human3");
    human3.action("intimidatingShout", "human1");

    return 0;
}