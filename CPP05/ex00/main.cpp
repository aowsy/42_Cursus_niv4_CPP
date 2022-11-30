/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:53:21 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/17 12:36:55 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat 	*Albert;
	Bureaucrat		*Steve;
	Bureaucrat		*Michael;
	Bureaucrat		*Johny;
	Bureaucrat		*Bob;
	Bureaucrat		*Joseline;
	std::cout << "	-Test : Constructeur Low grade-" << std::endl;
	try
	{
		Albert = new Bureaucrat("Albert", 150);
		Steve = new Bureaucrat("Steve", 100);
		Joseline = new Bureaucrat("Joseline", 50);
		Michael = new Bureaucrat("Michael", 1);
		Johny = new Bureaucrat("Johny", 151); // exception thrown
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "	-Test : Constructeur High grade-" << std::endl;
	try
	{
		Bob = new Bureaucrat("Bob", 0); // exception thrown
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "	-Test : Incrementation-" << std::endl;
	try
	{
		++(*Steve);
		++(*Michael); // exception thrown
		++(*Joseline);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *Steve << std::endl;
	std::cout << *Joseline << std::endl;
	std::cout << std::endl;


	std::cout << "	-Test : Decrementation-" << std::endl;
	try
	{
		--(*Steve);
		--(*Albert); // exception thrown
		--(*Joseline);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *Steve << std::endl;
	std::cout << *Joseline << std::endl;
	std::cout << std::endl;

	return 0;
}
