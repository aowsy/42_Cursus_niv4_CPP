/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:37:43 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/02 16:43:06 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
//	std::cout << "Ice default constructor called." << std::endl;

	return ;
}

Ice::Ice(const Ice & src)
{
//	std::cout << "Ice copy constructor called." << std::endl;

	*this = src;

	return ;
}

Ice::~Ice()
{
//	std::cout << "Ice destructor called." << std::endl;

	return ;
}

Ice	& Ice::operator=(const Ice & rhs)
{
	this->AMateria::operator=(rhs);

	return (*this);
}

AMateria	* Ice::clone() const
{
	AMateria	*rtn = new Ice(*this);

	return (rtn);
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

	return ;
}
