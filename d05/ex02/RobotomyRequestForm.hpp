/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:24:15 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/02 17:14:21 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(RobotomyRequestForm const &src);
  RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
  void execute(Bureaucrat const &executor) const;
  ~RobotomyRequestForm(void);
};

#endif // !ROBOTOMYREQUESTFORM_HPP
