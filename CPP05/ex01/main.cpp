/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:53:21 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/05 12:11:30 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat	Simone("Simone", 1);
	Bureaucrat	Pierre("Pierre", 150);
	Bureaucrat	Maxime("Maxime", 50);

	Form		A52("A52", 65, 10);
	Form		B789("B789", 150, 150);
	Form		Z12("Z12", 1, 66);

	std::cout << "	-Test constructor-" << std::endl;
	std::cout << A52 << std::endl;
	std::cout << B789 << std::endl;
	std::cout << Z12 << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "	-Test for sign-" << std::endl;
	Pierre.signForm(A52);
	Maxime.signForm(A52);
	std::cout << std::endl;

	Pierre.signForm(B789);
	Maxime.signForm(B789);
	Simone.signForm(B789);
	std::cout << std::endl;

	std::cout << A52 << std::endl;
	std::cout << B789 << std::endl;
	std::cout << Z12 << std::endl;
	std::cout << std::endl;

	Pierre.signForm(Z12);
	Maxime.signForm(Z12);
	Simone.signForm(Z12);
	std::cout << std::endl;

	return (0);
}
