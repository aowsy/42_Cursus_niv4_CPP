/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:25:14 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 14:57:18 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("default")
{
//	std::cout << "Default Character constructor called." << std::endl;

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;

	return ;
}

Character::Character(std::string name) : _name(name)
{
//	std::cout << "By string Character " << this->_name << " constructor called." << std::endl;

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;

	return ;
}

Character::Character(const Character & src)
{
//	std::cout << "Copy Character " << this->_name << " constructor called." << std::endl;

	*this = src;

	return ;
}

Character::~Character()
{
//	std::cout << "Character " << this->_name << " destructor called." << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}

	return ;
}

Character	& Character::operator=(const Character & rhs)
{
	this->_name = rhs.getName();

	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}

	return (*this);
}

void	Character::equip(AMateria *m)
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->_inventory[i])
			{
				this->_inventory[i] = m;
				break ;
			}
			if (i == 3)
				std::cout << "Equipment is full. No more Materia can be added." << std::endl;
		}
	}
	else
		std::cout << "Materia doesn't exist." << std::endl;

	return ;
}

void	Character::unequip(int idx)
{
	if (!this->_inventory[idx])
		std::cout << "Materia already doesn't exist." << std::endl;
	else
	{
		this->_inventory[idx] = NULL;
		std::cout << "Materia removed." << std::endl;
	}

	return ;
}

void	Character::use(int idx, ICharacter &target)
{
	if (!this->_inventory[idx])
		std::cout << "Equiment doesn't exist." << std::endl;
	else
		this->_inventory[idx]->use(target);

	return ;
}

const std::string	& Character::getName() const
{
	return (this->_name);
}
