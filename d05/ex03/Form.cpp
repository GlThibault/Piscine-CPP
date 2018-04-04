/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 15:13:12 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/02 17:47:45 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signingRequiredGrade, int executeRequireGrade) : _name(name)
{
    if (signingRequiredGrade < 1 || executeRequireGrade < 1)
        throw Form::GradeTooHighException();
    else if (signingRequiredGrade > 150 || executeRequireGrade > 150)
        throw Form::GradeTooLowException();
    else
    {
        this->_signingRequiredGrade = signingRequiredGrade;
        this->_executeRequireGrade = executeRequireGrade;
    }
}

Form::Form(Form const &src)
{
    *this = src;
}

Form &Form::operator=(Form const &rhs)
{
    this->_name = rhs._name;
    this->_executeRequireGrade = rhs._signingRequiredGrade;
    this->_executeRequireGrade = rhs._executeRequireGrade;
    return *this;
}

Form::~Form() {}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
    o << rhs.getName() << ", Form execute require grade : " << rhs.getExecuteRequireGrade() << ", signing require grade : " << rhs.getExecuteRequireGrade() << ", signed : " << rhs.getIsSigned();
    return o;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_signingRequiredGrade)
        throw Form::GradeTooLowException();
    else
        this->_isSigned = true;
}

std::string Form::getName(void) const
{
    return this->_name;
}

std::string Form::getTarget(void) const
{
    return this->_target;
}

void Form::setTarget(std::string target)
{
    this->_target = target;
}

bool Form::getIsSigned(void) const
{
    return this->_isSigned;
}

int Form::getSigningRequiredGrade(void) const
{
    return this->_signingRequiredGrade;
}

int Form::getExecuteRequireGrade(void) const
{
    return this->_executeRequireGrade;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
    *this = src;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &)
{

    return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{

    return ("Error : Grade is too High");
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
    *this = src;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &)
{
    return *this;
}

const char *Form::GradeTooLowException::what() const throw()
{

    return ("Error : Grade is too Low");
}
