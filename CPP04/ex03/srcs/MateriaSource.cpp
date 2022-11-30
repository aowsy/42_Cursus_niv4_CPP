/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:49:56 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 14:54:35 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
//	std::cout << "Default MateriaSource constructor called." << std::endl;

	for (int i = 0; i < 4; i++)
		this->_tab[i] = NULL;

	return ;
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
//	std::cout << "Copy MateriaSource constructor called." << std::endl;

	*this = src;

	return ;
}

MateriaSource::~MateriaSource()
{
//	std::cout << "MateriaSource destructor called." << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (this->_tab[i])
			delete this->_tab[i];
	}

	return ;
}

MateriaSource	& MateriaSource::operator=(const MateriaSource & rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_tab[i])
			delete this->_tab[i];
		if (rhs._tab[i])
			this->_tab[i] = rhs._tab[i]->clone();
		else
			this->_tab[i] = NULL;
	}

	return (*this);
}

void	MateriaSource::learnMateria(AMateria *rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_tab[i])
		{
			this->_tab[i] = rhs->clone();
			return ;
		}
		if (i == 3)
			std::cout << "Equipment is full. Impossible to learn Materia." << std::endl;
	}

	return ;
}

AMateria	* MateriaSource::createMateria(const std::string & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_tab[i]->getType() == type)
			return (this->_tab[i]->clone());
	}

	return (NULL);
}
