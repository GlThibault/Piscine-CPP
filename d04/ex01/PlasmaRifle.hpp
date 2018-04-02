/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:19:15 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 16:58:24 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
  PlasmaRifle();
  PlasmaRifle(PlasmaRifle const &src);
  PlasmaRifle &operator=(PlasmaRifle const &rhs);
  ~PlasmaRifle();
  void attack() const;
};

#endif // !PLASMARIFLE_HPP
