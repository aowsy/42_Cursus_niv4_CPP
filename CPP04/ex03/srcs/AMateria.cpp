/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:43:04 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 14:37:42 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type_("default")
{
//	std::cout << "AMateria default constructor called." << std::endl;

	return ;
}

AMateria::AMateria(std::string const & type) : type_(type)
{
//	std::cout << "AMateria by string constructor called." << std::endl;

	return ;
}

AMateria::AMateria(const AMateria & src)
{
//	std::cout << "AMateria copy constructor called." << std::endl;

	*this = src;

	return ;
}

AMateria::~AMateria()
{
//	std::cout << "AMateria destructor called." << std::endl;

	return ;
}

AMateria	& AMateria::operator=(const AMateria & rhs)
{
	this->type_ = rhs.getType();

	return(*this);
}

const std::string	& AMateria::getType() const
{
	return (this->type_);
}

void	AMateria::use(ICharacter & target)
{
	(void)target;

	return ;
}
