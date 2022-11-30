/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:21:46 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/17 12:39:01 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*							- Constructors -							*/

// default
Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
//	std::cout << "Default Bureaucrat constructor called." << std::endl;

	return ;
}

// name
Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150)
{
//	std::cout << "Bureaucrat " << this->_name << " constructor called." << std::endl;

	return ;
}

// values
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();

	else
		this->_grade = grade;

//	std::cout << "Bureaucrat " << this->_name << " constructor called." << std::endl;

	return ;
}

// copy
Bureaucrat::Bureaucrat(const Bureaucrat & src)
{
//	std::cout << "Copy Bureaucrat constructor called." << std::endl;

	*this = src;

	return ;
}



/*							- Destructor -								*/

Bureaucrat::~Bureaucrat()
{
//	std::cout << "Bureaucrat destructor called." << std::endl;

	return ;
}

/*							- Assign operator -							*/

Bureaucrat	& Bureaucrat::operator=(const Bureaucrat & rhs)
{
	this->_grade = rhs.getGrade();

	return (*this);
}



/*							- In/de-crement operators -					*/

// pre-increment
Bureaucrat	& Bureaucrat::operator++()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	
	else
		this->_grade--;

	return (*this);
}

// post-increment
Bureaucrat	Bureaucrat::operator++(int)
{
	Bureaucrat	copy = *this;

	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	
	else
		++(*this);

	return (copy);
}

// pre-decrement
Bureaucrat	& Bureaucrat::operator--()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	
	else
		this->_grade++;

	return (*this);
}

// post-decrement
Bureaucrat	Bureaucrat::operator--(int)
{
	Bureaucrat	copy = *this;

	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		--(*this);

	return (copy);
}



/*							- Getters -									*/

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}



/*							- Function -								*/

void	Bureaucrat::signForm(Form & form) const
{
	if (form.getStatus() == true)
	{
		std::cout << "Bureaucrat " << this->_name << " can't sign the Form ";
		std::cout << form.getName() << ", because it is already signed." << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat " << this->_name << " signed Form " << form.getName() << "." << std::endl;
	}
	catch (const Form::GradeTooLowException & e)
	{
		std::cout << "Bureaucrat " << this->_name << " " << e.what() << std::endl;
	}

	return ;
}



/*							- Overload -								*/

std::ostream	& operator<<(std::ostream & o, const Bureaucrat & i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}
