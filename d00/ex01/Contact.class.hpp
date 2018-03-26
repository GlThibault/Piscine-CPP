/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:59:12 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/26 16:15:56 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

class Contact {

public:

    std::string firstname,
                lastname,
                nickname,
                login,
                postalAddress,
                emailAddress,
                phoneNumber,
                birthdayDate,
                favoriteMeal,
                underwearColor,
                darkestSecret;
    
    Contact(void);
    ~Contact(void);

    static int getNbInst(void);
    
private:
    static int _nbInst;
};

#endif