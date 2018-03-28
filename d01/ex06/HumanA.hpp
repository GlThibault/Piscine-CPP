/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:41:09 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 16:27:05 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
        std::string getName(void);
        void attack(void);
        Weapon getWeapon(void);
        void setWeapon(Weapon weapon);

    private:
        std::string _name;
        Weapon& _weapon;
};

#endif