/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:48:38 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/04 11:33:19 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::complain(std::string level)
{
	int			i;
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*fct_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (i = 0; i < 4; i++)
	{
		if (level == str[i])
			break ;
	}
	switch (i)
	{
		case (0):
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*fct_ptr[0])();
		case (1):
			std::cout << "[ INFO ]" << std::endl;
			(this->*fct_ptr[1])();
		case (2):
			std::cout << "[ WARNING ]" << std::endl;
			(this->*fct_ptr[2])();
		case (3):
			std::cout << "[ ERROR ]" << std::endl;
			(this->*fct_ptr[3])();
			break ;
		default:
			std::cout << "Wrong argument" << std::endl << std::endl;
			break ;
	}
	return ;
}

void	Harl::debug(void)
{
	std::cout << "Debug level" << std::endl << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "Info level" << std::endl << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "Warning level" << std::endl << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "Error level" << std::endl << std::endl;
	return ;
}
