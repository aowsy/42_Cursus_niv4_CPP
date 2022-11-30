/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:25:51 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/21 09:42:37 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	std::cout << "	-Integer Test-" << std::endl;
	Array<int>		I(5);

	try
	{
		for (int i = 0; i < 6; i++)
		{
			int tmp = rand();
			I[i] = tmp;
			std::cout << "Random to index " << i << " is " << tmp << "." << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 6; i++)
	{
		try
		{
			std::cout << "index = " << i << " nb == " << I[i] << "." << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "	-String Test-" << std::endl;
	Array<std::string>		Name(5);

	try
	{
		Name[0] = "Josiane";
		Name[1] = "Murielle";
		Name[2] = "Sophie";
		Name[3] = "Jacqueline";
		Name[4] = "Louison";
		Name[5] = "Nahama";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < 6; i++)
	{
		try
		{
			std::cout << "index = " << i << " nb == " << Name[i] << "." << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "	-Empty test-" << std::endl;
	Array<int>	vide;

	std::cout << vide.size() << std::endl;

	return 0;
}
