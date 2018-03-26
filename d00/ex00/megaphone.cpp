/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 11:41:19 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/26 13:26:28 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

void    toupper(char* str)
{
    while (*str)
    {
        *str = std::toupper(*str);
        str++;
    }
}

int     main(int argc, char **argv)
{
    std::locale loc;
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } else {
        for (int i = 1; i < argc; i++) {
            toupper(argv[i]);
            std::cout << argv[i];
        }
        std::cout << std::endl;
    }

    return 0;
}