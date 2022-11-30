/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:53:28 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/06 11:31:53 by mdelforg         ###   ########.fr       */
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
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*fct_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (str[i] == level)
			(this->*fct_ptr[i])();
	}
	return ;
}

void	Harl::debug(void)
{
	std::cout << "Debug level" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "Info level" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "Warning level" << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "Error level" << std::endl;
	return ;
}
