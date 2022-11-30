/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:05:39 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/20 15:44:45 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout<<"Harl needs an argument:";
		std::cout<<" - DEBUG - INFO - WARNING - ERROR" << std::endl;
		return (1);
	}
	std::string	str = av[1];
	if (ac != 2 || (str.compare("DEBUG") && str.compare("INFO") && str.compare("WARNING") && str.compare("ERROR")))
	{
		std::cout<<"Harl needs an argument:";
		std::cout<<" - DEBUG - INFO - WARNING - ERROR" << std::endl;
		return (1);
	}

	Harl	harl;

	harl.complain(av[1]);

	return (0);
}
