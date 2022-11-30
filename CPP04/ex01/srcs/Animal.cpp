/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:24:30 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 10:40:32 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*							- Constructors -							*/

// default
Animal::Animal(void) : type_("default")
{
	std::cout << "Default Animal constructor called." << std::endl;

	return ;
}

// by string
Animal::Animal(std::string type) : type_(type)
{
	std::cout << "Animal " << this->type_ << " constructor called." << std::endl;

	return ;
}

// copy
Animal::Animal(const Animal & src)
{
	std::cout << "Copy Animal constructor called." << std::endl;

	*this = src;

	return ;
}



/*							- Destructor -								*/

Animal::~Animal(void)
{
	std::cout << "Animal desturctor called." << std::endl;

	return ;
}



/*							- Assign operator -							*/

Animal	& Animal::operator=(const Animal & rhs)
{
	this->type_ = rhs.type_;

	return (*this);
}



/*							- Getter -									*/

std::string	Animal::getType(void) const
{
	return (this->type_);
}



/*							- Function -								*/

void	Animal::makeSound(void) const
{
	std::cout << "...undefined sound..." << std::endl;

	return ;
}
