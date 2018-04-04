/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:40:00 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/03 14:40:26 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Intern
{

  public:
    Intern(void);
    Intern(Intern const &src);
    ~Intern(void);
    Intern &operator=(Intern const &);

    Form *makeForm(std::string form, std::string target);
};

#endif // !INTER_HPP
