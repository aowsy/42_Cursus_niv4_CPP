/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:37:43 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/02 16:42:48 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
//	std::cout << "Cure default constructor called." << std::endl;

	return ;
}

Cure::Cure(const Cure & src)
{
//	std::cout << "Cure copy constructor called." << std::endl;

	*this = src;

	return ;
}

Cure::~Cure()
{
//	std::cout << "Cure destructor called." << std::endl;

	return ;
}

Cure	& Cure::operator=(const Cure & rhs)
{
	this->AMateria::operator=(rhs);

	return (*this);
}

AMateria	* Cure::clone() const
{
	AMateria	*rtn = new Cure(*this);

	return (rtn);
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

	return ;
}
