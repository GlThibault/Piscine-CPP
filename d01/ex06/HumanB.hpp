/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:41:09 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 19:57:10 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB(void);
        std::string getName(void);
        void attack(void);
        Weapon getWeapon(void);
        void setWeapon(Weapon &weapon);

    private:
        std::string _name;
        Weapon* _weapon;
};

#endif