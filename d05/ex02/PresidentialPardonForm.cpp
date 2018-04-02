/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:25:17 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/02 17:47:53 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("PresidentialPardonForm", 25, 5)
{
    *this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &)
{
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() <= 5 && this->getIsSigned() == true)
        std::cout << this->getTarget() << " has been pardonned by Zafod Beeblebrox." << std::endl;
    else if (this->getIsSigned() == false)
        std::cout << "The form isn't signed." << std::endl;
    else
        throw Form::GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}
