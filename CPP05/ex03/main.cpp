/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:53:21 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/17 13:28:00 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	Bureaucrat Micheal("Micheal", 1);
	Bureaucrat Jim("Jim", 72);
	Intern Rayan;
	AForm* P_form;
	AForm* R_form;
	AForm* S_form;
	P_form = Rayan.makeForm("presidential pardon", "Obama");
	R_form = Rayan.makeForm("robotomy request", "Lincoln");
	S_form = Rayan.makeForm("shrubbery creation", "Tree_file");

	std::cout << std::endl << " ---- Lvl Tests ---- " << std::endl;
	try
	{
		P_form = Rayan.makeForm("Sheeeshhh", "Obama");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jim.executeForm(*P_form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		P_form->execute(Jim);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Jim.signForm(*R_form);
	try
	{
		Jim.executeForm(*R_form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << " ---- Actions Tests ---- " << std::endl;
	Micheal.signForm(*P_form);
	Micheal.signForm(*R_form);
	Micheal.signForm(*S_form);
	Micheal.executeForm(*P_form);
	Micheal.executeForm(*R_form);
	Micheal.executeForm(*S_form);
	std::cout << std::endl;

	delete P_form;
	delete R_form;
	delete S_form;

	return (0);
}
