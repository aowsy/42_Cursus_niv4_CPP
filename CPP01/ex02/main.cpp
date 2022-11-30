/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:10:30 by mdelforg          #+#    #+#             */
/*   Updated: 2022/09/30 16:25:59 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << std::endl;
	std::cout << "Variable address:      " << &str << std::endl;
	std::cout << "Adress from stringPTR: " << stringPTR << std::endl;
	std::cout << "Adress from stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "Value of the variable: " << str << std::endl;
	std::cout << "Value from stringPTR:  " << *stringPTR << std::endl;
	std::cout << "Value from stringREF:  " << stringREF << std::endl << std::endl;
	return (0);
}
