/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 13:49:39 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 14:04:29 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
    public:
        NinjaTrap(std::string name);
        NinjaTrap(NinjaTrap const & src);
        ~NinjaTrap(void);

        NinjaTrap &  operator=(NinjaTrap const & rhs);
        void ninjaShoebox(FragTrap const & target);
        void ninjaShoebox(ClapTrap const & target);
        void ninjaShoebox(ScavTrap const & target);
        void ninjaShoebox(NinjaTrap const & target);
};

#endif
