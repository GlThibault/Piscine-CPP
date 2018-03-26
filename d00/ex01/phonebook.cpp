/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:02:51 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/26 17:21:06 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

void    indent(std::string str, int length) {
    if (length > 10)
        std::cout << str.substr(0,9) << ".";
    else
        std::cout << str.insert(0, -length + 10, ' ');
}

void    ft_search(Contact * contacts[8], int nbInst) {
    int i = 0;

    std::cout << "    Index | Firstname| Lastname | Nickname " << std::endl;
    for (int j=0; j < nbInst; j++) {
        std::cout << "         " << j << "|";
        indent(contacts[j]->firstname, contacts[j]->firstname.length());
        std::cout << '|';
        indent(contacts[j]->lastname, contacts[j]->lastname.length());
        std::cout << '|';
        indent(contacts[j]->nickname, contacts[j]->nickname.length());
        std::cout << std::endl;
    }
    std::cout << "Enter the index wanted : ";
    std::cin >> i;
    if (i >= nbInst)
        std::cout << "Contact not found." << std::endl;
    else {
        std::cout << "Firstname : " << contacts[i]->firstname << std::endl;
        std::cout << "Lastname : " << contacts[i]->lastname << std::endl;
        std::cout << "Nickname : " << contacts[i]->nickname << std::endl;
        std::cout << "Login : " << contacts[i]->login << std::endl;
        std::cout << "Postal address : " << contacts[i]->postalAddress << std::endl;
        std::cout << "Email address : " << contacts[i]->emailAddress << std::endl;
        std::cout << "Phone number : " << contacts[i]->phoneNumber << std::endl;
        std::cout << "Birthday date : " << contacts[i]->birthdayDate << std::endl;
        std::cout << "FavoriteMeal : " << contacts[i]->favoriteMeal << std::endl;
        std::cout << "Underwear color : " << contacts[i]->underwearColor << std::endl;
        std::cout << "Darkest secret : " << contacts[i]->darkestSecret << std::endl;
    }
}

int     main(void) {
    std::string buff;
    Contact *contacts[8];
    int nbInst = 0;

    std::cout << "Phonebook started!" << std::endl;
    while (1) {
        std::cin >> buff;

        if ("EXIT" == buff)
            return 0;
        else if ("ADD" == buff) {
            if (nbInst < 8) {
                contacts[nbInst] = new Contact;
                std::cout << "Contact " << contacts[nbInst]->firstname << " " << contacts[nbInst]->lastname << " added!" << std::endl;
                nbInst = contacts[0]->getNbInst();
            } else
                std::cout << "Phonebook is full." << std::endl;
        } else if ("SEARCH" == buff) {
            if (nbInst < 1)
                std::cout << "Phonebook is empty." << std::endl;
            else
                ft_search(contacts, nbInst);
        }
    }
    return 0;
}