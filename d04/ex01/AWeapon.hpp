/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:58:56 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 15:48:45 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
protected:
  std::string _name;
  int _apcost;
  int _damage;

public:
  AWeapon(AWeapon const &src);
  AWeapon(std::string const &name, int apcost, int damage);
  AWeapon &operator=(AWeapon const &rhs);
  virtual ~AWeapon();
  std::string const &getName() const;
  int getAPCost() const;
  int getDamage() const;
  virtual void attack() const = 0;
};

#endif // !AWEAPON_HPP
