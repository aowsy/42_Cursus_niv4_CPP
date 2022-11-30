/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:33:32 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/14 14:17:38 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

/*							- Constructors -							*/

// default
DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "Default DiamondTrap constructor." << std::endl;

	this->_name = "default";
	this->_energy = 50;

	return ;
}

// string
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name.append("_clap_name")), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap " << name << " constructor." << std::endl;

	this->_name = name;
	this->_energy = 50;

	return ;
}

// copy
DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src), ScavTrap(), FragTrap()
{
	*this = src;
	std::cout << "DiamondTrap " << this->_name << " copy constructor." << std::endl;
	return ;
}



/*							- Destructor -								*/

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " destructor called." << std::endl;
	return ;
}



/*							- Assign operator -							*/

DiamondTrap	& DiamondTrap::operator=(const DiamondTrap & rhs)
{
	this->ClapTrap::_name = rhs.ClapTrap::_name;
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;

	return (*this);
}



/*							- Function -								*/

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->_name << ", and my ClapTrap name is ";
	std::cout << this->ClapTrap::_name << "." << std::endl;

	return ;
}
