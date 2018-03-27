/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:12:30 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 16:03:57 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        Zombie(std::string name, std::string type);
        ~Zombie(void);
        
        void announce(void);
        std::string getName(void);
        std::string getType(void);
        void setName(std::string name);
        void setType(std::string type);

        
    private:
        std::string _name;
        std::string _type;
};

#endif