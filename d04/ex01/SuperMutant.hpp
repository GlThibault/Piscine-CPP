/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:45:07 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 17:16:18 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
  SuperMutant();
  SuperMutant(SuperMutant const &src);
  using Enemy::operator=;
  ~SuperMutant();
};

#endif // !SUPERMUTANT_HPP
