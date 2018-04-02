/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:12:47 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/02 16:11:12 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

    Bureaucrat b1("b1", 2);
    std::cout << b1 << std::endl;

    Bureaucrat b2("b2", 92);
    std::cout << b2 << std::endl;

    std::cout << "test b2 sign f1" << std::endl;
    Form f1("f1", 42, 42);
    try
    {
        b2.signForm(f1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "test b1 sign f1" << std::endl;
    try
    {
        b1.signForm(f1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "test f2 init with -3" << std::endl;
    try
    {
        Form f2("f2", -3, 42);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "test f2 init with 180" << std::endl;
    try
    {
        Form f3("f2", 180, 42);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
