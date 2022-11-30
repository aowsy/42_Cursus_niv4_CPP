/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:30:11 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 13:47:41 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*							- Constructors -							*/

// default
Dog::Dog(void) : AAnimal("Dog")
{
	std::cout << "Default Dog constructor called." << std::endl;

	this->_brain = new Brain();

	return ;
}

// copy
Dog::Dog(const Dog & src) : AAnimal(src)
{
	std::cout << "Copy Dog constructor called." << std::endl;

	this->_brain = new Brain(*src.getBrain());

	return ;
}



/*							- Destructor -								*/

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;

	delete this->_brain;

	return ;
}



/*							- Assign operator -							*/

Dog	& Dog::operator=(const Dog & rhs)
{
	this->type_ = rhs.type_;

	delete this->_brain;
	this->_brain = new Brain(*rhs.getBrain());

	return (*this);
}



/*							- Getters -									*/

Brain	* Dog::getBrain(void) const
{
	return (this->_brain);
}

std::string	Dog::getIdea(int i) const
{
	return (this->_brain->getIdea(i));
}



/*							- Setter -									*/

void	Dog::setIdea(std::string idea)
{
	this->_brain->setIdea(idea);

	return ;
}



/*							- Function -								*/

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof!" << std::endl;

	return ;
}
