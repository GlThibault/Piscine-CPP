/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:12:47 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/02 15:30:06 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{

    Bureaucrat b1("b1", 2);

    std::cout << b1 << std::endl;
    std::cout << "test b1 promote" << std::endl;
    try
    {
        b1.promoteGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "test b1 promote" << std::endl;
    try
    {
        b1.promoteGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "test b2 init -3" << std::endl;
    try
    {
        Bureaucrat b2("b2", -3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "test b3 init 153" << std::endl;
    try
    {
        Bureaucrat b3("b3", 153);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat b4("b4", 149);

    std::cout << "test b4 demote" << std::endl;
    try
    {
        b4.demoteGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "test b4 demote" << std::endl;
    try
    {
        b4.demoteGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
