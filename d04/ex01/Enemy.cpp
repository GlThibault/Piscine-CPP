/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:27:04 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/30 17:15:31 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(Enemy const &src)
{
    *this = src;
}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
}

Enemy &Enemy::operator=(Enemy const &rhs)
{
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return *this;
}

Enemy::~Enemy()
{
}

std::string const &Enemy::getType() const
{
    return this->_type;
}

int Enemy::getHP() const
{
    return this->_hp;
}

void Enemy::takeDamage(int damage)
{
    if (this->_hp > 0)
    {
        this->_hp -= damage;
        if (this->_hp < 0)
            this->_hp = 0;
    }
}
