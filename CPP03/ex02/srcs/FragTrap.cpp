/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:11:57 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/07 14:18:37 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

/*							- Constructors -							*/

// default
FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default Fragtrap constructor." << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;

	return ;
}

// string
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Fragtrap " << name << " constructor." << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;

	return ;
}

// copy
FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	*this = src;
	std::cout << "FragTrap " << this->_name << " copy constructor." << std::endl;
	return ;
}



/*							- Destructor -								*/

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " destructor called." << std::endl;
	return ;
}



/*							- Assign operator -							*/

FragTrap	& FragTrap::operator=(const FragTrap & rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;

	return (*this);
}



/*							- Function -								*/

void	FragTrap::attack(const std::string & target)
{
	if (!this->_hp)
	{
		std::cout << "Fragtrap " << this->_name;
		std::cout << " can't attack " << target << ", because he is dead." << std::endl;
		return ;
	}
	if (!this->_energy)
	{
		std::cout << "FragTrap " << this->_name;
		std::cout << " can't attack " << target << ", because he is out of energy." << std::endl;
		return ;
	}

	std::cout << "FragTrap " << this->_name << " attacks " << target;
	std:: cout << ". Causing " << this->_damage << " damage." << std::endl;

	this->_energy--;

	return ;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hp == 0)
	{
		std::cout << "FragTrap " << this->_name;
		std::cout << " can't make a high five because he is dead." << std:: endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " makes a high five." << std:: endl;
	return ;
}
