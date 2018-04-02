/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:11:59 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 14:52:32 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
public:
    Victim(std::string name);
    Victim(Victim const & src);
    Victim &operator=(Victim const & rhs);
    ~Victim();

    void getPolymorphed(void) const;
    std::string getName(void) const;
    
protected:
    std::string _name;
};

std::ostream &     operator<<(std::ostream & o, Victim const & rhs);

#endif // !VICTIM_HPP