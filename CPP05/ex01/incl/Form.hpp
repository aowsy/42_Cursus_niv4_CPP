/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:21:20 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/05 11:44:16 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
# define _FORM_HPP_

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

	// constructors
		Form();
		Form(std::string name);
		Form(std::string name, int sign, int exec);
		Form(const Form & src);

	// destructor
		~Form();

	// assign operator
		Form	& operator=(const Form & rhs);

	// getters
		std::string	getName() const;
		bool		getStatus() const;
		int			getSign() const;
		int			getExec() const;

	// function
		void	beSigned(const Bureaucrat & brc);

	// exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high to sign or execute, max grade is 1.");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low to sign or execute, min grade is 150.");
				}
		};


	private:

		std::string	_name;
		bool		_status;
		const int	_sign;
		const int	_exec;

};

std::ostream	& operator<<(std::ostream & o, const Form & i);

#endif
