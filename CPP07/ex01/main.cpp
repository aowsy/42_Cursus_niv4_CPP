/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:53:11 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/22 15:29:51 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main (void)
{
	int				i[10] = {1, 56, 789, 2147483647, -2147483648, -478, 4356541, -489456, 0, 42};
	std::string		str[4] = {"Josiane", "Micheline", "Murielle", "Myriam"};
	float			fl[4] = {89.89f, 456465, 5, -1164.23f};

	std::cout << "	-Integer Test-" << std::endl;
	iter(i, 10, display<int>);
	std::cout << std::endl;

	std::cout << "	-String Test-" << std::endl;
	iter(str, 4, display<std::string>);
	std::cout << std::endl;

	std::cout << "	-Float Tests-" << std::endl;
	iter(fl, 4, display<float>);

	return 0;
}
