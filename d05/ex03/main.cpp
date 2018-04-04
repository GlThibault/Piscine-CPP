/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:12:47 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/03 14:47:24 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
    Intern someRandomIntern;
    Form *rrf = someRandomIntern.makeForm("robotomy request", "Bender1");
    std::cout << "Target: " << rrf->getTarget() << std::endl;
    Form *scf = someRandomIntern.makeForm("shrubbery creation", "Bender2");
    std::cout << "Target: " << scf->getTarget() << std::endl;
    Form *ppf = someRandomIntern.makeForm("presidential pardon", "Bender3");
    std::cout << "Target: " << ppf->getTarget() << std::endl;

    return (0);
}
