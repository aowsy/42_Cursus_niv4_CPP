/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:18:41 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 13:18:56 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*							- Constructors -							*/

// default
Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default Cat constructor called." << std::endl;

	return ;
}

// copy
Cat::Cat(const Cat & src) : Animal(src)
{
	std::cout << "Copy Cat constructor called." << std::endl;

	return ;
}



/*							- Destructor -								*/

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;

	return ;
}



/*							- Assign operator -							*/

Cat	& Cat::operator=(const Cat & rhs)
{
	this->type_ = rhs.type_;

	return (*this);
}



/*							- Function -								*/

void	Cat::makeSound(void) const
{
	std::cout << "Meeeeoooooowwwwwww!" << std::endl;

	return ;
}
