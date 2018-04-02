/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:26:48 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 17:04:32 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
  RadScorpion();
  RadScorpion(RadScorpion const &src);
  using Enemy::operator=;
  ~RadScorpion();
  void takeDamage(int damage);
};

#endif // !RADSCORPION_HPP
