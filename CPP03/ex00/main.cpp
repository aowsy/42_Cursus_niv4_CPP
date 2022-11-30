/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:04:23 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/07 14:06:08 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Simone("Simone");
	ClapTrap	Nicole("Nicole");
	ClapTrap	third(Simone);
	ClapTrap	Alexie;

	std::cout<<std::endl;
	third = Nicole;

	std::cout<<std::endl;
	Simone.attack("Murielle");

	std::cout<<std::endl;
	Nicole.takeDamage(6);
	Simone.takeDamage(15);

	std::cout<<std::endl;
	Simone.attack("Murielle");
	Nicole.attack("Vincent");

	std::cout<<std::endl;
	Simone.beRepaired(12);
	Nicole.beRepaired(3);

	for (int i = 0; i < 2; i++)
	{
		Simone.attack("Murielle");
		Nicole.attack("Vincent");
	}

	std::cout<<std::endl;

	return (0);
}
