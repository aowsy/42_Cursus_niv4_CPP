/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:25:56 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/07 14:22:51 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"

int main()
{
	ClapTrap clap1("Chad", 100, 100, 100);
	ScavTrap clap2("ScavChad");
	FragTrap clap3("FragMcqueen");

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

	std::cout << std::endl << "----- Clap3 test ----- " << std::endl;
	clap3.attack("Sigma");
	clap3.takeDamage(50);
	clap3.attack("Sigma");
	clap3.beRepaired(50);
	clap3.attack("Sigma");
	clap3.takeDamage(150);
	clap3.highFivesGuys();
	clap3.highFivesGuys();
	clap3.attack("Sigma");
	clap3.beRepaired(50);
	std::cout << std::endl;

}
