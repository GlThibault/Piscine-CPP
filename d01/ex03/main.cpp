/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:58:40 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 17:22:12 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void) {
    ZombieHorde *horde1 = new ZombieHorde(6);
    delete horde1;
    ZombieHorde *horde2 = new ZombieHorde(3);
    ZombieHorde *horde3 = new ZombieHorde(1);
    delete horde2;
    delete horde3;
    return 0;
}