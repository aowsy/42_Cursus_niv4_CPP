/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:02:06 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/21 15:31:56 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
	Data		*test = new Data("Kashow");
	uintptr_t	tmp;

	std::cout << "	- Origin -" << std::endl;
	std::cout << "Name : " << test->getName() << std::endl;
	std::cout << "Adress : " << test << std::endl;

	tmp = serialize(test);
	std::cout << std::endl << "	- After serialize -" << std::endl;
	std::cout << "Adress : " << &tmp << std::endl;
	test = deserialize(tmp);

	std::cout << std::endl << "	- After deserialize -" << std::endl;
	std::cout << "Name : " << test->getName() << std::endl;
	std::cout << "Adress : " << test << std::endl;
	return 0;
}
