/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:40:23 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 13:47:59 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*							- Constructors -							*/

// default
AAnimal::AAnimal(void) : type_("default")
{
	std::cout << "Default AAnimal constructor called." << std::endl;

	return ;
}

// by string
AAnimal::AAnimal(std::string type) : type_(type)
{
	std::cout << "AAnimal " << this->type_ << " constructor called." << std::endl;

	return ;
}

// copy
AAnimal::AAnimal(const AAnimal & src)
{
	std::cout << "Copy AAnimal constructor called." << std::endl;

	*this = src;

	return ;
}



/*							- Destructor -								*/

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal desturctor called." << std::endl;

	return ;
}



/*							- Assign operator -							*/

AAnimal	& AAnimal::operator=(const AAnimal & rhs)
{
	this->type_ = rhs.type_;

	return (*this);
}



/*							- Getter -									*/

std::string	AAnimal::getType(void) const
{
	return (this->type_);
}



/*							- Function -								*/

void	AAnimal::makeSound(void) const
{
	std::cout << "...undefined sound..." << std::endl;

	return ;
}
