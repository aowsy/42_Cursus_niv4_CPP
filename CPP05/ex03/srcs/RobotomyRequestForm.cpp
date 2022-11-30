/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:35:09 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/05 15:25:13 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*							- Constructors -							*/

// default
RobotomyRequestForm::RobotomyRequestForm() : AForm("Robot", "default", 72, 45)
{
	return ;
}

// string
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", target, 72, 45)
{
	return ;
}

// copy
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) : AForm("Robotomy", src.getTarget(), 72, 45)
{
	return ;
}



/*							- Destructor -								*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}



/*							- Assign operator -							*/

RobotomyRequestForm	& RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
	this->getTarget() = rhs.getTarget();

	return (*this);
}



/*							- Function -								*/

void	RobotomyRequestForm::execAction(const Bureaucrat & executor) const
{
	this->execute(executor);

	std::cout << "* ...drilling noises... *" << std::endl;

	srand(time(NULL));

	if (rand() % 2)
		std::cout << this->getTarget() << " has been successfully robotomized." << std::endl;
	else
		std::cout << "Robotomy on " << this->getTarget() << " has failed." << std::endl;

	return ;
}
