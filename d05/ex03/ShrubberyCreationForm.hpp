/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:24:33 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/02 17:20:12 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(ShrubberyCreationForm const &src);
  ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
  void execute(Bureaucrat const &executor) const;
  ~ShrubberyCreationForm(void);
};

#endif // !SHRUBBERYCREATIONFORM_HPP
