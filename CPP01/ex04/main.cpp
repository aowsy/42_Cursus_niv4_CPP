/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:48:17 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/06 11:27:06 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	error(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (error("Error: please provide 3 arguments"));
	std::string		fileStr = av[1];
	std::string		str1 = av[2];
	std::string		str2 = av[3];

	std::ifstream	file1(fileStr);
	if (file1.fail())
	{
		std::string	s = "Error: open ";
		s.append(fileStr);
		return (error(s));
	}


	std::ofstream	file2(fileStr.append(".replace"));
	if (file2.fail())
	{
		std::string	s = "Error: open ";
		s.append(fileStr);
		return (error(s));
	}

	std::string	buffer;
	while (std::getline(file1, buffer))
	{
		if (file1.bad() || file1.eof())
			return (error("Error: getline"));
		size_t	pos = 0;
		while (buffer.find(av[2], pos, str1.length()) != std::string::npos)
		{
			pos = buffer.find(av[2], pos, str1.length());
			buffer.erase(pos, str1.length());
			buffer.insert(pos, str2);
			pos += str2.length();
		}
		file2 << buffer << std::endl;
	}
	file1.close();
	file2.close();
	return (0);
}
