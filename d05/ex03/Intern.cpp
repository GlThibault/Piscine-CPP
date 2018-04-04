/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:28:01 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/03 14:41:44 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern(void)
{
}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern &Intern::operator=(Intern const &)
{
    return *this;
}

Intern::~Intern(void)
{
}

Form *Intern::makeForm(std::string form, std::string target)
{
    if (form == "shrubbery creation")
        return (new ShrubberyCreationForm(target));
    else if (form == "robotomy request")
        return (new RobotomyRequestForm(target));
    else if (form == "presidential pardon")
        return (new PresidentialPardonForm(target));
    return (NULL);
}
