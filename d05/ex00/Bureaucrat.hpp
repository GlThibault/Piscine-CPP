/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:12:50 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/02 13:12:51 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{

  public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &src);
    Bureaucrat &operator=(Bureaucrat const &rhs);
    ~Bureaucrat(void);

    std::string getName(void) const;
    int getGrade(void) const;
    void promoteGrade(void);
    void demoteGrade(void);

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
    int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif // !BUREAUCRAT_HPP
