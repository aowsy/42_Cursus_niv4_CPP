/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:07:51 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 13:19:29 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*							- Constructors -							*/

// default
WrongAnimal::WrongAnimal(void) : type_("WrongDefault")
{
	std::cout << "Default WrongAnimal constructor called." << std::endl;

	return ;
}

// by string
WrongAnimal::WrongAnimal(std::string type) : type_(type)
{
	std::cout << "WrongAnimal " << this->type_ << " constructor called." << std::endl;

	return ;
}

// copy
WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	std::cout << "Copy WrongAnimal constructor called." << std::endl;

	*this = src;

	return ;
}



/*							- Destructor -								*/

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal desturctor called." << std::endl;

	return ;
}



/*							- Assign operator -							*/

WrongAnimal	& WrongAnimal::operator=(const WrongAnimal & rhs)
{
	this->type_ = rhs.type_;

	return (*this);
}



/*							- Getter -									*/

std::string	WrongAnimal::getType(void) const
{
	return (this->type_);
}



/*							- Function -								*/

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*...undefined sound...*" << std::endl;

	return ;
}
