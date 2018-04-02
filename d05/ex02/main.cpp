/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:12:47 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/02 18:05:27 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    Bureaucrat b1("b1", 1);
    Bureaucrat b2("b2", 80);

    PresidentialPardonForm presidentialPardonForm("TargetPresidentialPardonForm");
    ShrubberyCreationForm shrubberyCreationForm("TargetShrubberyCreationForm");
    RobotomyRequestForm robotomyRequestForm("TargetRobotomyRequestForm");

    std::cout << "test signForm" << std::endl;
    try
    {
        b2.signForm(presidentialPardonForm);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "test signForm" << std::endl;
    try
    {
        b1.signForm(presidentialPardonForm);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "test presidentialPardonForm execute" << std::endl;
    try
    {
        presidentialPardonForm.execute(b1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "test presidentialPardonForm execute" << std::endl;
    try
    {
        presidentialPardonForm.execute(b2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "test shrubberyCreationForm execute" << std::endl;
    try
    {
        shrubberyCreationForm.execute(b2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    b2.signForm(shrubberyCreationForm);
    try
    {
        shrubberyCreationForm.execute(b2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "test robotomyRequestForm execute" << std::endl;
    try
    {
        robotomyRequestForm.execute(b1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        b2.signForm(robotomyRequestForm);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        b1.signForm(robotomyRequestForm);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        robotomyRequestForm.execute(b1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
