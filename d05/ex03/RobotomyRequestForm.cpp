/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:01:41 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/02 17:56:26 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequestForm", 72, 45)
{
    *this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &)
{
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    srand(time(NULL));
    if (executor.getGrade() <= 45 && this->getIsSigned() == true)
    {
        std::cout << "ZZZZ *drilling noises*" << std::endl;
        if (rand() % 2 == 0)
            std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
        else
            std::cout << "It's a failure." << std::endl;
    }
    else if (this->getIsSigned() == false)
        std::cout << "The form isn't signed." << std::endl;
    else
        throw Form::GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}
