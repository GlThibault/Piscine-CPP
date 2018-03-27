/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:59:12 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 14:47:48 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

class Contact {

public:
    
    Contact(void);
    ~Contact(void);

    static int getNbInst(void);
    void setFirstName(std::string);
    std::string getFirstName(void);
    void setLastname(std::string);
    std::string getLastname(void);
    void setNickname(std::string);
    std::string getNickname(void);
    void setLogin(std::string);
    std::string getLogin(void);
    void setPostalAddress(std::string);
    std::string getPostalAddress(void);
    void setEmailAddress(std::string);
    std::string getEmailAddress(void);
    void setPhoneNumber(std::string);
    std::string getPhoneNumber(void);
    void setBirthdayDate(std::string);
    std::string getBirthdayDate(void);
    void setFavoriteMeal(std::string);
    std::string getFavoriteMeal(void);
    void setUnderwearColor(std::string);
    std::string getUnderwearColor(void);
    void setDarkestSecret(std::string);
    std::string getDarkestSecret(void);
private:
    static int _nbInst;
    std::string _firstname,
                _lastname,
                _nickname,
                _login,
                _postalAddress,
                _emailAddress,
                _phoneNumber,
                _birthdayDate,
                _favoriteMeal,
                _underwearColor,
                _darkestSecret;
};

#endif