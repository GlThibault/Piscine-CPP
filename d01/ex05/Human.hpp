/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:06:36 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 18:31:38 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>

class Human {
    public:
        Human(void);
        ~Human(void);
        std::string const identify(void);
        Brain const & getBrain(void);
        
        Brain const brain;
};

#endif