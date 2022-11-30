/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:02:59 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/16 15:29:31 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include <iostream>
#include <cstdlib>

Base	*generate(void)
{
	int i = rand() % 3;

	switch (i)
	{
		case 0:
			std::cout << "A is generated." << std::endl;
			return (new A);
		case 1:
			std::cout << "B is generated." << std::endl;
			return (new B);
		case 2:
			std::cout << "C is generated." << std::endl;
			return (new C);
		default :
			return (NULL);
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Type Base A by pointer." << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Type Base B by pointer." << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Type Base C by pointer." << std::endl;
	else
		std::cout << "Type Base by pointer not found." << std::endl;
	return ;
}

void	identify(Base &p)
{
	try
	{
		if (dynamic_cast<A *>(&p))
			std::cout << "Type Base A by reference." << std::endl;
		else if (dynamic_cast<B *>(&p))
			std::cout << "Type Base B by reference." << std::endl;
		else if (dynamic_cast<C *>(&p))
			std::cout << "Type Base C by reference." << std::endl;
		else
			std::cout << "Type Base by reference not found." << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}
