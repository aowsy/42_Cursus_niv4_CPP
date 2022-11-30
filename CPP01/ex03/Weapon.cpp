/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:35:11 by mdelforg          #+#    #+#             */
/*   Updated: 2022/09/30 18:14:35 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _type(weapon)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string	Weapon::getType(void) const
{
	return ((const std::string)this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
