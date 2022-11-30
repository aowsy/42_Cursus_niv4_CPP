/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:20:18 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/25 15:51:21 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>

int main()
{
	std::cout << "	- Pdf Tests -" << std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span = "  << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << std::endl << "	- My Tests -" << std::endl;
	{
		std::cout << "Test 10000 numbers :"<< std::endl;
		try
		{
			Span test(10000);
			for (int i = 1; i <= 9999; i++)
				test.addNumber(i);
			test.addNumber(20000);

			std::cout << "Shortest span = " << test.shortestSpan() << std::endl;
			std::cout << "Longest span = "  << test.longestSpan() <<std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl << "Test max size :"<< std::endl;
		try
		{
			Span test(3);
			test.addNumber(20000);
			test.addNumber(20000);
			test.addNumber(20000);
			test.addNumber(20000);

			std::cout << "Shortest span = " << test.shortestSpan() << std::endl;
			std::cout << "Longest span = "  << test.longestSpan() <<std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl << "Test size 1 :"<< std::endl;
		try
		{
			Span test(1);
			test.addNumber(20000);

			std::cout << "Shortest span = " << test.shortestSpan() << std::endl;
			std::cout << "Longest span = "  << test.longestSpan() <<std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl << "Test range iterator :"<< std::endl;
		try
		{
			Span test(20);
			test.addNumber(100);

			std::vector<int> vec(7, 42);

			test.addNumber(vec.begin(), vec.end());

			std::cout << "Shortest span = " << test.shortestSpan() << std::endl;
			std::cout << "Longest span = "  << test.longestSpan() <<std::endl;
			std::cout << "vec : ";
			for (size_t i = 0; i < 8; i++)
			{
				std::cout << test.getVct(i) << " ";
			}
			std::cout  << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
