/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:27:10 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 15:48:35 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
protected:
  int _hp;
  std::string _type;

public:
  Enemy(int hp, std::string const &type);
  Enemy(Enemy const &src);
  Enemy &operator=(Enemy const &rhs);
  virtual ~Enemy();
  std::string const &getType() const;
  int getHP() const;
  virtual void takeDamage(int);
};

#endif // !ENEMY_HPP
