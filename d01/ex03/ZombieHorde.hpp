/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:58:43 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 17:20:31 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
    public:
        ZombieHorde(int NbZombie);
        ~ZombieHorde(void);

        void announce(Zombie *zombies, int NbZombies);
        void setZombies(Zombie *zombies);
        Zombie *getZombies(void);

    private:
        Zombie *_zombies;  
};

#endif