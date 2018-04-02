/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:29:33 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 17:06:30 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
  std::string _name;
  int _ap;
  AWeapon *_weapon;

public:
  Character(std::string const &name);
  Character(Character const &src);
  Character &operator=(Character const &rhs);
  ~Character();
  void recoverAP();
  void equip(AWeapon *);
  void attack(Enemy *);
  int getAP() const;
  bool hasWeapon() const;
  std::string const &getName() const;
  std::string const &getWeaponName() const;
};

std::ostream &operator<<(std::ostream &o, Character const &rhs);

#endif // !CHARACTER_CPP
