/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 14:17:35 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 18:00:03 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>

class SuperTrap : public SuperTrap, public NinjaTrap {
    public:
        SuperTrap(std::string name);
        SuperTrap(SuperTrap const & src);
        ~SuperTrap(void);

        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        SuperTrap &  operator=(SuperTrap const & rhs);
};

#endif