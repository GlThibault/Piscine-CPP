/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:04:58 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 15:04:58 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

class Pony {
    public:
        Pony(void);
        ~Pony(void);
        void setName(std::string);
        std::string getName(void);
    private:
        std::string _name;
};

#endif