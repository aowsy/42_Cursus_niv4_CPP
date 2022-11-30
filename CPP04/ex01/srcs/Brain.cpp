/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:44:22 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 13:25:58 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*							- Constructors -							*/

// default
Brain::Brain(void)
{
	std::cout << "Default Brain constructor called." << std::endl;

	return ;
}

// copy
Brain::Brain(const Brain & src)
{
	std::cout << "Copy Brain constructor called." << std::endl;

	*this = src;

	return ;
}



/*							- Destructor -								*/

Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl;

	return ;
}



/*							- Assign operator -							*/

Brain	& Brain::operator=(const Brain & rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];

	return (*this);
}



/*							- Getter -									*/

std::string	Brain::getIdea(int i) const
{
	if (i < 0 || i >= 100)
		return ("Out of range.");
	if (this->_ideas[i].empty() == true)
		return ("Undeclared idea.");
	return (this->_ideas[i]);
}



/*							- Setter -									*/

void	Brain::setIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i].empty() == true)
		{
			this->_ideas[i] = idea;
			return ;
		}
	}
	std::cout << "This brain is full of ideas." << std::endl;
	return ;
}
