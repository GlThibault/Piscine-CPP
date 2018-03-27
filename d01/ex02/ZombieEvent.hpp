/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:21:07 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 16:34:19 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
    public:
        ZombieEvent(void);
        ~ZombieEvent(void);
        Zombie* newZombie(std::string name);
        Zombie* randomChump(void);
        void setZombieType(Zombie *zombie, std::string type);
};

#endif