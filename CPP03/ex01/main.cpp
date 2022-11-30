/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:25:56 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/07 14:11:49 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScavTrap.hpp"

int	main(void)
{
	ClapTrap clap1("Chad", 100, 100, 0);
	ScavTrap clap2("ScavChad");

	std::cout << std::endl << "----- Clap1 test ----- " << std::endl;
	clap1.attack("Sigma");
	clap1.takeDamage(50);
	clap1.attack("Sigma");
	clap1.beRepaired(50);
	clap1.attack("Sigma");
	clap1.takeDamage(150);
	clap1.attack("Sigma");
	clap1.beRepaired(50);

	std::cout << std::endl << "----- Clap2 test ----- " << std::endl;
	clap2.attack("Sigma");
	clap2.takeDamage(50);
	clap2.attack("Sigma");
	clap2.beRepaired(50);
	clap2.attack("Sigma");
	clap2.guardGate();
	clap2.takeDamage(150);
	clap2.attack("Sigma");
	clap2.beRepaired(50);
	clap2.guardGate();
	std::cout << std::endl;

	return (0);
}
