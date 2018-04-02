/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 15:13:19 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/02 16:17:18 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:
  Form(std::string name, int signingRequiredGrade, int executeRequireGrade);
  Form(Form const &src);
  Form &operator=(Form const &rhs);
  ~Form(void);

  void beSigned(Bureaucrat &bureaucrat);
  std::string getName(void) const;
  bool getIsSigned(void) const;
  int getSigningRequiredGrade(void) const;
  int getExecuteRequireGrade(void) const;

  class GradeTooHighException : public std::exception
  {
  public:
    GradeTooHighException();
    GradeTooHighException(GradeTooHighException const &src);
    ~GradeTooHighException() throw();
    GradeTooHighException &operator=(GradeTooHighException const &);
    virtual const char *what() const throw();
  };

  class GradeTooLowException : public std::exception
  {
  public:
    GradeTooLowException();
    GradeTooLowException(GradeTooLowException const &src);
    ~GradeTooLowException() throw();
    GradeTooLowException &operator=(GradeTooLowException const &);
    virtual const char *what() const throw();
  };

private:
  std::string _name;
  bool _isSigned;
  int _signingRequiredGrade;
  int _executeRequireGrade;
};

#endif
