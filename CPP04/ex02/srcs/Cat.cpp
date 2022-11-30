/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:18:41 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 13:47:42 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*							- Constructors -							*/

// default
Cat::Cat(void) : AAnimal("Cat")
{
	std::cout << "Default Cat constructor called." << std::endl;

	this->_brain = new Brain();

	return ;
}

// copy
Cat::Cat(const Cat & src) : AAnimal(src)
{
	std::cout << "Copy Cat constructor called." << std::endl;

	this->_brain = new Brain(*src.getBrain());

	return ;
}



/*							- Destructor -								*/

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;

	delete this->_brain;

	return ;
}



/*							- Assign operator -							*/

Cat	& Cat::operator=(const Cat & rhs)
{
	this->type_ = rhs.type_;

	delete this->_brain;
	this->_brain = new Brain(*rhs.getBrain());

	return (*this);
}



/*							- Getters -									*/

Brain	* Cat::getBrain(void) const
{
	return (this->_brain);
}

std::string	Cat::getIdea(int i) const
{
	return (this->_brain->getIdea(i));
}



/*							- Setter -									*/

void	Cat::setIdea(std::string idea)
{
	this->_brain->setIdea(idea);

	return ;
}



/*							- Function -								*/

void	Cat::makeSound(void) const
{
	std::cout << "Meeeeoooooowwwwwww!" << std::endl;

	return ;
}
