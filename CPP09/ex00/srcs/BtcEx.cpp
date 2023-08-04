/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BtcEx.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:52:47 by mdelforg          #+#    #+#             */
/*   Updated: 2023/08/04 10:49:00 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BtcEx.hpp"

/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          CONSRTUCTOR                             */
/*                                                                  */
/* ---------------------------------------------------------------- */
// default
BtcEx::BtcEx()
{
	try
	{
		this->collect_database("archive/data.csv");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
}

// copy
BtcEx::BtcEx(const BtcEx &src)
{
	*this = src;
}


/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          DESRTUCTOR                              */
/*                                                                  */
/* ---------------------------------------------------------------- */
BtcEx::~BtcEx()
{
	return ;
}


/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          ASSIGN OPERATOR                         */
/*                                                                  */
/* ---------------------------------------------------------------- */
BtcEx	& BtcEx::operator=(const BtcEx &rhs)
{
	this->dtBase_map = rhs.dtBase_map;

	return (*this);
}


/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          FUNCTIONS                               */
/*                                                                  */
/* ---------------------------------------------------------------- */
// collect database
void	BtcEx::collect_database(std::string dtbase_name)
{
	std::ifstream	dtBase_file;
	dtBase_file.open(dtbase_name);
	if (!dtBase_file.is_open())
		throw myEx();

	for (char c; dtBase_file.get(c) && c != '\n';)
	{}

	while (!dtBase_file.eof())
	{
		char		c = '\0';
		std::string	str1;
		std::string	str2;

		while (c != ',' && !dtBase_file.eof())
		{
			dtBase_file.get(c);
			if (c != ',')
				str1.push_back(c);
		}

		int	i = 0;
		while (c != '\n' && !dtBase_file.eof())
		{
			dtBase_file.get(c);
			if (c != '\n')
				str2.push_back(c);
			i++;
		}
		this->dtBase_map.insert(std::pair<std::string, double>(str1, std::atof(str2.data())));
	}

	dtBase_file.close();
}

// run the converter
void	BtcEx::exchange(const char *fileName)
{
	try
	{
		std::ifstream	in_file;
		in_file.open(fileName);
		if (!in_file.is_open())
			throw myEx();

		while (!in_file.eof())
		{
			char	buf[256];

			in_file.getline(buf, 256);
			if (in_file.gcount() == 255 && buf[254] != '\n')
				throw myEx();

			if (!in_file.eof()) 
				this->read_infile(buf);
		}
		in_file.close();
	}

	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
}

// parsing infile
void	BtcEx::read_infile(char buf[256])
{
	std::string	str(&buf[0]);

	if (!str.find_first_of('\n') && !str.find_first_of('\0'))
		return ;

	if (!str.compare("date | value"))
	{
		return ;
	}

	if (str.size() < 14)
	{
		std::cout << "Error: bad input => " << str << std::endl;
		return ;
	}
	if (str.size() > 27)
	{
		std::cout << "Error: line too long => " << str << std::endl;
		return ;
	}

	for (int i = 0; i < 10; i++)
	{
		if (((i == 4 || i == 7) && str[i] != '-') || ((i != 4 && i != 7) && !isdigit(str[i])))
		{
			std::cout << "Error: bad input => " << str << std::endl;
			return ;
		}
	}

	if (str[5] > '1' || (str[5] == '1' && str[6] > '2'))
	{
		std::cout << "Error: not a valid date => " << str << std::endl;
		return ;
	}
	if (str[8] > '3' || (str[8] == '3' && str[9] > '0'))
	{
		std::cout << "Error: not a valid date => " << str << std::endl;
		return ;
	}

	if (str[10] != ' ' || str[12] != ' ' || str[11] != '|')
	{
		std::cout << "Error: bad input => " << str << std::endl;
		return ;
	}

	int check_dot = 0;
	for (size_t i = 13; i < str.size(); i++)
	{
		if (i == 13 && ((str[i] != '-' && !isdigit(str[i + 1])) && !isdigit(str[i])))
		{
			std::cout << "Error: bad input => " << str << std::endl;
			return ;
		}
		else if (str[i] == '.')
		{
			check_dot++;
			if (check_dot < 1)
			{
				std::cout << "Error: bad input => " << str << std::endl;
				return ;
			}
		}
		else if (i != 13 && !isdigit(str[i]))
		{
			std::cout << "Error: bad input => " << str << std::endl;
			return ;
		}
	}

// array to double
	double	f = std::atof(&buf[13]);
	if (f < 0.0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return ;
	}
	if (f > 1000.0)
	{
		std::cout << "Error: too large a number." << std::endl;
		return ;
	}

	std::map<std::string, double>::iterator it;
	it = this->dtBase_map.find(str.substr(0, 10));
	if (str.substr(0, 10) < dtBase_map.begin()->first)
		it = dtBase_map.begin();
	if (it == dtBase_map.end())
	{
		it = this->dtBase_map.lower_bound(str.substr(0, 10));
		it--;
	}

	std::cout << str.substr(0, 10) << " => " << f << " = " << it->second * f << std::endl;
}
