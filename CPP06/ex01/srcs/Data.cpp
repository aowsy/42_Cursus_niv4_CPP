/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:52:30 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/15 18:04:59 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/*							- Constructors -							*/

// default
Data::Data() : _name("default")
{
	return ;
}

// by string
Data::Data(std::string name) : _name(name)
{
	return ;
}

// copy
Data::Data(const Data & src)
{
	*this = src;

	return ;
}



/*							- Destructor -								*/
Data	& Data::operator=(const Data & rhs)
{
	this->_name = rhs._name;

	return (*this);
}



/*							- Getter -									*/

std::string	Data::getName() const
{
	return (this->_name);
}



/*							- Functions -								*/

uintptr_t	serialize(Data	*ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
