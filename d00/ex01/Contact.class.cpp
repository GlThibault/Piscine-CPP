/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 14:00:06 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 14:46:26 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void) {
    std::string tmp;
    std::cout << "Enter your firstname : ";
    std::cin >> tmp;
    setFirstName(tmp);
    std::cout << "Enter your lastname : ";
    std::cin >> tmp;
    setLastname(tmp);
    std::cout << "Enter your nickname : ";
    std::cin >> tmp;
    setNickname(tmp);
    std::cout << "Enter your login : ";
    std::cin >> tmp;
    setLogin(tmp);
    std::cout << "Enter your postal address : ";
    std::cin >> tmp;
    setPostalAddress(tmp);
    std::cout << "Enter your email address : ";
    std::cin >> tmp;
    setEmailAddress(tmp);
    std::cout << "Enter your phone number : ";
    std::cin >> tmp;
    setPhoneNumber(tmp);
    std::cout << "Enter your birthday date : ";
    std::cin >> tmp;
    setBirthdayDate(tmp);
    std::cout << "Enter your favorite meal : ";
    std::cin >> tmp;
    setFavoriteMeal(tmp);
    std::cout << "Enter your underwear color : ";
    std::cin >> tmp;
    setUnderwearColor(tmp);
    std::cout << "Enter your darkest secret : ";
    std::cin >> tmp;
    setDarkestSecret(tmp);
    this->_nbInst++;
    return;
}

Contact::~Contact(void) {
    return;
}

int Contact::getNbInst(void) {
    return Contact::_nbInst;
}

void Contact::setFirstName(std::string str) {
    this->_firstname = str;
    return;
}

std::string Contact::getFirstName(void) {
    return (this->_firstname);
}

void Contact::setLastname(std::string str) {
    this->_lastname = str;
    return;
}

std::string Contact::getLastname(void) {
    return (this->_lastname);
}

void Contact::setNickname(std::string str) {
    this->_nickname = str;
    return;
}

std::string Contact::getNickname(void) {
    return (this->_nickname);
}

void Contact::setLogin(std::string str) {
    this->_login = str;
    return;
}

std::string Contact::getLogin(void) {
    return (this->_login);
}

void Contact::setPostalAddress(std::string str) {
    this->_postalAddress = str;
    return;
}

std::string Contact::getPostalAddress(void) {
    return (this->_postalAddress);
}

void Contact::setEmailAddress(std::string str) {
    this->_emailAddress = str;
    return;
}

std::string Contact::getEmailAddress(void) {
    return (this->_emailAddress);
}

void Contact::setPhoneNumber(std::string str) {
    this->_phoneNumber = str;
    return;
}

std::string Contact::getPhoneNumber(void) {
    return (this->_phoneNumber);
}

void Contact::setBirthdayDate(std::string str) {
    this->_birthdayDate = str;
    return;
}

std::string Contact::getBirthdayDate(void) {
    return (this->_birthdayDate);
}

void Contact::setFavoriteMeal(std::string str) {
    this->_favoriteMeal = str;
    return;
}

std::string Contact::getFavoriteMeal(void) {
    return (this->_favoriteMeal);
}

void Contact::setUnderwearColor(std::string str) {
    this->_underwearColor = str;
    return;
}

std::string Contact::getUnderwearColor(void) {
    return (this->_underwearColor);
}

void Contact::setDarkestSecret(std::string str) {
    this->_darkestSecret = str;
    return;
}

std::string Contact::getDarkestSecret(void) {
    return (this->_darkestSecret);
}


int Contact::_nbInst = 0;