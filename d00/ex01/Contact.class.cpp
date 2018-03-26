/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 14:00:06 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/26 17:25:30 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void) {
    std::cout << "Enter your firstname : ";
    std::cin >> this->firstname;
    std::cout << "Enter your lastname : ";
    std::cin >> this->lastname;
    std::cout << "Enter your nickname : ";
    std::cin >> this->nickname;
    std::cout << "Enter your login : ";
    std::cin >> this->login;
    std::cout << "Enter your postal address : ";
    std::cin >> this->postalAddress;
    std::cout << "Enter your email address : ";
    std::cin >> this->emailAddress;
    std::cout << "Enter your phone number : ";
    std::cin >> this->phoneNumber;
    std::cout << "Enter your birthday date : ";
    std::cin >> this->birthdayDate;
    std::cout << "Enter your favorite meal : ";
    std::cin >> this->favoriteMeal;
    std::cout << "Enter your underwear color : ";
    std::cin >> this->underwearColor;
    std::cout << "Enter your darkest secret : ";
    std::cin >> this->darkestSecret;
    this->_nbInst++;
    return;
}

Contact::~Contact(void) {
    return;
}

int Contact::getNbInst(void) {
    return Contact::_nbInst;
}

int Contact::_nbInst = 0;