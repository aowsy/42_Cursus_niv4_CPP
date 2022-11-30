/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:10:33 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/03 13:27:17 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

/*							- Constructors -							*/

// default
ClapTrap::ClapTrap(void) : _name("default"), _hp(10), _energy(10), _damage(0)
{
	std::cout << "Default ClapTrap constructor." << std::endl;
	return ;
}

// string
ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap " << name << " constructor." << std::endl;
	return ;
}

// values
ClapTrap::ClapTrap(std::string name, int hp, int energy, int damage) : _name(name), _hp(hp), _energy(energy), _damage(damage)
{
	std::cout << "ClapTrap " << name << " constructor." << std::endl;
	return ;
}

// copy
ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "ClapTrap " << this->_name << " copy constructor." << std::endl;
	return ;
}



/*							- Destructor -								*/

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " destructor called." << std::endl;
	return ;
}



/*							- Assign operator -							*/

ClapTrap	& ClapTrap::operator=(const ClapTrap & rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;

	return (*this);
}


/*							- Functions -								*/

void	ClapTrap::attack(const std::string & target)
{
	if (!this->_hp)
	{
		std::cout << "Claptrap " << this->_name;
		std::cout << " can't attack " << target << ", because he is dead." << std::endl;
		return ;
	}
	if (!this->_energy)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " can't attack " << target << ", because he is out of energy." << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std:: cout << ". Causing " << this->_damage << " damage." << std::endl;

	this->_energy--;

	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hp)
	{
		std::cout << "Claptrap " << this->_name;
		std::cout << " can't take more damage, because he is already dead." << std::endl;
		return ;
	}
	if (amount >= this->_hp)
	{
		std::cout << "Claptrap " << this->_name << " has taken ";
		std::cout << this->_hp << " points of damage, he is dead now." << std::endl;
		this->_hp = 0;
		return ;
	}

	std::cout << "Claptrap " << this->_name;
	std::cout << " has taken " << amount << " points of damage." << std::endl;

	this->_hp -= amount;

	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hp)
	{
		std::cout << "Claptrap " << this->_name;
		std::cout << " can't be repaired, because he is dead." << std::endl;
		return ;
	}
	if (!this->_energy)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " can't be repaired, because he is out of energy." << std::endl;
		return ;
	}

	this->_hp += amount;

	std::cout << "Claptrap " << this->_name << " is repaired and has regained ";
	std::cout << amount << ", with " << this->_hp << " hp now." << std::endl;

	this->_energy--;

	return ;
}
