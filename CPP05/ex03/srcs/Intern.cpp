/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:47:04 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/06 16:21:07 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*							- Constructors -							*/

// default
Intern::Intern()
{
	return ;
}

// copy
Intern::Intern(const Intern & src)
{
	(void)src;

	return ;
}



/*							- Destructor -								*/

Intern::~Intern()
{
	return ;
}



/*							- Assign operator -							*/

Intern	& Intern::operator=(const Intern & rhs)
{
	(void)rhs;

	return (*this);
}



/*							- Function -								*/

AForm	* Intern::makeForm(std::string formName, std::string target)
{
	int			i = 0;
	AForm		*rtn = NULL;
	std::string	nameTab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	while (i < 3 && nameTab[i] != formName)
		i++;

	switch (i)
	{
		case (0):
			rtn = new ShrubberyCreationForm(target);
			break;
		case (1):
			rtn = new RobotomyRequestForm(target);
			break;
		case (2):
			rtn = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::InvalidFromException();
	}

	std::cout << "Intern creates " << formName << std::endl;

	return (rtn);
}
