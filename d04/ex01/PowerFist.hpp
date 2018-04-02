/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:26:24 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 17:03:34 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
  PowerFist();
  PowerFist(PowerFist const &src);
  using AWeapon::operator=;
  ~PowerFist();
  void attack() const;
};

#endif // !POWERFIST_HPP
