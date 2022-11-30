/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:31:24 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/05 14:52:05 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AFORM_HPP_
# define _AFORM_HPP_

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

	public:

	// constructors
		AForm();
		AForm(std::string name);
		AForm(std::string name, int sign, int exec);
		AForm(std::string name, std::string target, int sign, int exec);
		AForm(const AForm & src);

	// destructor
		virtual ~AForm();

	// assign operator
		AForm	& operator=(const AForm & rhs);

	// getters
		std::string	getName() const;
		std::string	getTarget() const;
		bool		getStatus() const;
		int			getSign() const;
		int			getExec() const;

	// functions
		void			beSigned(const Bureaucrat & brc);
		void			execute(const Bureaucrat & executor) const;
		virtual void	execAction(const Bureaucrat & executor) const = 0;

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
		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form can't be executed because it is not signed.");
				}
		};


	private:

		std::string	_name;
		std::string	_target;
		bool		_status;
		const int	_sign;
		const int	_exec;

};

std::ostream	& operator<<(std::ostream & o, const AForm & i);

#endif
