/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:12:13 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/17 13:00:14 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

# include <iostream>

#include "AForm.hpp"

class AForm;

class Bureaucrat
{

	public:

	// constructors
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & src);

	// destructor
		~Bureaucrat();

	// assign operator
		Bureaucrat	& operator=(const Bureaucrat & rhs);

	// in/de-crement operator
		Bureaucrat	& operator++();
		Bureaucrat	operator++(int);
		Bureaucrat	& operator--();
		Bureaucrat	operator--(int);

	// getters
		std::string	getName() const;
		int			getGrade() const;

	// function
		void	signForm(AForm & form) const;
		void	executeForm(AForm & form) const;

	// exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high, max grade is 1.");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low, min grade is 150.");
				}
		};

	private:

		const std::string	_name;
		int					_grade;

};

std::ostream	& operator<<(std::ostream & o, const Bureaucrat & i);

#endif
