/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:11:28 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 13:19:45 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*							- Constructors -							*/

// default
WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat constructor called." << std::endl;

	return ;
}

// copy
WrongCat::WrongCat(const WrongCat & src) : WrongAnimal(src)
{
	std::cout << "Copy WrongCat constructor called." << std::endl;

	return ;
}



/*							- Destructor -								*/

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called." << std::endl;

	return ;
}



/*							- Assign operator -							*/

WrongCat	& WrongCat::operator=(const WrongCat & rhs)
{
	this->type_ = rhs.type_;

	return (*this);
}



/*							- Function -								*/

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongMeeeeoooooowwwwwww!" << std::endl;

	return ;
}
