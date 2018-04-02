/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:12:52 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/02 13:12:52 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_name = rhs._name;
    this->_grade = rhs._grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return o;
}

std::string Bureaucrat::getName(void) const
{
    return this->_name;
}

int Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

void Bureaucrat::promoteGrade(void)
{
    if (this->_grade > 1)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::demoteGrade(void)
{
    if (this->_grade < 150)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
    if (this->_grade <= form.getSigningRequiredGrade() && form.getIsSigned() == 0)
    {
        std::cout << this->_name << " signs " << form.getName() << std::endl;
        form.beSigned(*this);
    }
    else if (this->_grade > form.getSigningRequiredGrade())
    {
        std::cout << this->_name << " cannot sign " << form.getName() << " because his grade is too low." << std::endl;
    }
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
    *this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &)
{

    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{

    return ("Error : Grade is too High");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
    *this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &)
{
    return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{

    return ("Error : Grade is too Low");
}
