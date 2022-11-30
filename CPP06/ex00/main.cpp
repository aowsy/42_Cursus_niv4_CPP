/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:20:36 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/15 17:36:59 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

#include <iomanip>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage is ./Scalar_type argument1" << std::endl;
		return 0;
	}

	try
	{
		Convert	essai(argv[1]);
		std::cout << std::fixed << std::setprecision(1);
		std::cout << essai;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	return 0;
}
