/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:42:56 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/14 14:02:02 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

/*							- Constructors -							*/

// default
ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default SvapTrap constructor." << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;

	return ;
}

// string
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " constructor." << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;

	return ;
}

// copy
ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	*this = src;
	std::cout << "ScavTrap " << this->_name << " copy constructor." << std::endl;
	return ;
}



/*							- Destructor -								*/

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destructor called." << std::endl;
	return ;
}



/*							- Assign operator -							*/

ScavTrap	& ScavTrap::operator=(const ScavTrap & rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;

	return (*this);
}



/*						- Redifined function -							*/

void	ScavTrap::attack(const std::string & target)
{
	if (!this->_hp)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " can't attack " << target << ", because he is dead." << std::endl;
		return ;
	}
	if (!this->_energy)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " can't attack " << target << ", because he is out of energy." << std::endl;
		return ;
	}

	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std:: cout << ". Causing " << this->_damage << " damage." << std::endl;

	this->_energy--;

	return ;
}



/*							- Function -								*/

void	ScavTrap::guardGate(void)
{
	if (this->_hp == 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " can't be a Gate keeper because he is dead." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " started being a Gate keeper." << std::endl;

	return ;
}
