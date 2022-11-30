/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:53:21 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/17 13:14:14 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*
int		main(void)
{
	Bureaucrat	Simone("Simone", 1);
	Bureaucrat	Pierre("Pierre", 150);
	Bureaucrat	Maxime("Maxime", 50);

	ShrubberyCreationForm	Shrubb("Home");
	RobotomyRequestForm		Robot("Steve");
	PresidentialPardonForm	Presidential("Murielle");

	Pierre.signForm(Shrubb);
	Simone.signForm(Shrubb);
	std::cout << std::endl;

	Pierre.executeForm(Shrubb);
	Maxime.executeForm(Shrubb);
	std::cout << std::endl;

	Simone.signForm(Robot);
	Simone.executeForm(Robot);
	std::cout << std::endl;

	Simone.signForm(Presidential);
	Simone.executeForm(Presidential);
}
*/

int main ()
{
	srand(time(NULL));

	Bureaucrat Micheal("Micheal", 1);
	Bureaucrat Jim("Jim", 72);
	PresidentialPardonForm P_form("Obama");//LVL 25, 5
	RobotomyRequestForm R_form("Lincoln");//LVL 72, 45
	ShrubberyCreationForm S_form("Tree_file");//LVL 145, 137

	std::cout << std::endl << " ---- Lvl Tests ---- " << std::endl;
	try
	{
		Jim.executeForm(P_form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		P_form.execute(Jim);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Jim.signForm(R_form);
	try
	{
		Jim.executeForm(R_form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << " ---- Actions Tests ---- " << std::endl;
	Micheal.signForm(P_form);
	Micheal.signForm(R_form);
	Micheal.signForm(S_form);
	std::cout << std::endl;

	Micheal.executeForm(P_form);
	std::cout << std::endl;

	Micheal.executeForm(R_form);
	Micheal.executeForm(R_form);
	Micheal.executeForm(R_form);
	std::cout << std::endl;

	Micheal.executeForm(S_form);
	std::cout << std::endl;
}
