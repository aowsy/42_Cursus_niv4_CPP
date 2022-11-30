/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:26:07 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/06 16:31:47 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*							- Constructors -							*/

// default
AForm::AForm() : _name("default"), _status(false), _sign(150), _exec(150)
{
	return ;
}

// string
AForm::AForm(std::string name) : _name(name), _status(false), _sign(150), _exec(150)
{
	return ;
}

// values
AForm::AForm(std::string name, int sign, int exec) : _name(name), _status(false), _sign(sign), _exec(exec)
{
	if (sign < 1 || exec < 1)
		throw AForm::GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw AForm::GradeTooLowException();

	return ;
}

// values + target
AForm::AForm(std::string name, std::string target, int sign, int exec) : _name(name), _target(target), _status(false), _sign(sign), _exec(exec)
{
	if (sign < 1 || exec < 1)
		throw AForm::GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw AForm::GradeTooLowException();

	return ;
}

// copy
AForm::AForm(const AForm & src) : _name(src.getName()), _status(src.getStatus()), _sign(src.getSign()), _exec(src.getExec())
{
	return ;
}



/*							- Destructor -								*/

AForm::~AForm()
{
	return ;
}



/*							- Assign operator -							*/

AForm	& AForm::operator=(const AForm & rhs)
{
	this->_status = rhs.getStatus();

	return (*this);
}



/*							- Getters -									*/

std::string	AForm::getName() const
{
	return (this->_name);
}

std::string	AForm::getTarget() const
{
	return (this->_target);
}

bool	AForm::getStatus() const
{
	return (this->_status);
}

int	AForm::getSign() const
{
	return (this->_sign);
}

int	AForm::getExec() const
{
	return (this->_exec);
}



/*							- Functions -								*/

void	AForm::beSigned(const Bureaucrat & brct)
{
	if (brct.getGrade() <= this->_sign)
		this->_status = true;

	else
		throw AForm::GradeTooLowException();

	return ;
}

void	AForm::execute(const Bureaucrat & executor) const
{
	if (this->_status == false)
		throw AForm::NotSignedException();

	if (this->_exec <= executor.getGrade())
		throw AForm::GradeTooLowException();

	return ;
}



/*							- Overload operator -						*/

std::ostream	& operator<<(std::ostream & o, const AForm & i)
{
	if (i.getStatus() == false)
	{
		o << "AForm " << i.getName() << " is not signed. It can be signed by a Bureaucrat grade ";
		o << i.getSign() << " and can be executed by a Bureaucrat grade ";
		o << i.getExec() << ".";
	}
	else
	{
		o << "AForm " << i.getName() << " is signed. It could be signed by a Bureaucrat grade ";
		o << i.getSign() << " and can be executed by a Bureaucrat grade ";
		o << i.getExec() << ".";
	}
	
	return (o);
}
