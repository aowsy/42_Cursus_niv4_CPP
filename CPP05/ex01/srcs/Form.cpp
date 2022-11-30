/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:42:56 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/05 12:06:38 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*							- Constructors -							*/

// default
Form::Form() : _name("default"), _status(false), _sign(150), _exec(150)
{
	return ;
}

// string
Form::Form(std::string name) : _name(name), _status(false), _sign(150), _exec(150)
{
	return ;
}

// values
Form::Form(std::string name, int sign, int exec) : _name(name), _status(false), _sign(sign), _exec(exec)
{
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();

	return ;
}

// copy
Form::Form(const Form & src) : _name(src.getName()), _status(src.getStatus()), _sign(src.getSign()), _exec(src.getExec())
{
	return ;
}



/*							- Destructor -								*/

Form::~Form()
{
	return ;
}



/*							- Assign operator -							*/

Form	& Form::operator=(const Form & rhs)
{
	this->_status = rhs.getStatus();

	return (*this);
}



/*							- Getters -									*/

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getStatus() const
{
	return (this->_status);
}

int	Form::getSign() const
{
	return (this->_sign);
}

int	Form::getExec() const
{
	return (this->_exec);
}



/*							- Function -								*/

void	Form::beSigned(const Bureaucrat & brct)
{
	if (brct.getGrade() <= this->_sign)
		this->_status = true;

	else
		throw Form::GradeTooLowException();

	return ;
}



/*							- Overload operator -						*/

std::ostream	& operator<<(std::ostream & o, const Form & i)
{
	if (i.getStatus() == false)
	{
		o << "Form " << i.getName() << " is not signed. It can be signed by a Bureaucrat grade ";
		o << i.getSign() << " and can be executed by a Bureaucrat grade ";
		o << i.getExec() << ".";
	}
	else
	{
		o << "Form " << i.getName() << " is signed. It could be signed by a Bureaucrat grade ";
		o << i.getSign() << " and can be executed by a Bureaucrat grade ";
		o << i.getExec() << ".";
	}
	
	return (o);
}
