/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:30:11 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 13:19:11 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*							- Constructors -							*/

// default
Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default Dog constructor called." << std::endl;

	return ;
}

// copy
Dog::Dog(const Dog & src) : Animal(src)
{
	std::cout << "Copy Dog constructor called." << std::endl;

	return ;
}



/*							- Destructor -								*/

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;

	return ;
}



/*							- Assign operator -							*/

Dog	& Dog::operator=(const Dog & rhs)
{
	this->type_ = rhs.type_;

	return (*this);
}



/*							- Function -								*/

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof!" << std::endl;

	return ;
}
