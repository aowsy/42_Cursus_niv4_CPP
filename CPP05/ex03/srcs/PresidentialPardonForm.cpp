/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:48:43 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/05 15:02:01 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*							- Constructors -							*/

// default
PresidentialPardonForm::PresidentialPardonForm() : AForm("Persidential", "default", 25, 5)
{
	return ;
}

// string
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Persidential", target, 25, 5)
{
	return ;
}

// copy
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) : AForm("Persidential", src.getTarget(), 25, 5)
{
	return ;
}



/*							- Destructor -								*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}



/*							- Assign operator -							*/

PresidentialPardonForm	& PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
	this->getTarget() = rhs.getTarget();

	return (*this);
}



/*							- Function -								*/

void	PresidentialPardonForm::execAction(const Bureaucrat & executor) const
{
	this->execute(executor);

	std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox." << std::endl;

	return ;
}
