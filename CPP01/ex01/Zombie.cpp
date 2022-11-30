/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:41:27 by mdelforg          #+#    #+#             */
/*   Updated: 2022/09/30 16:01:00 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name) : _name(name)
{
	this->announce();
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": I'm alive" << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
