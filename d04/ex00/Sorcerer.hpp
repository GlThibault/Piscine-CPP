/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:11:56 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 14:46:22 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const & src);
    Sorcerer &operator=(Sorcerer const & rhs);
    ~Sorcerer();

    void polymorph(Victim const & src) const;
    void polymorph(Peon const & src) const;
    std::string getName(void) const;
    std::string getTitle(void) const;
    
private:
    std::string _name,
                _title;
};

std::ostream &     operator<<(std::ostream & o, Sorcerer const & rhs);

#endif // !SORCERER_HPP