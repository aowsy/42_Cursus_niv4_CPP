/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:42:32 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/06 16:16:44 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERN_HPP_
# define _INTERN_HPP_

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

	// constructors
		Intern();
		Intern(const Intern & src);

	// destructor
		~Intern();

	// assign operator
		Intern	& operator=(const Intern & rhs);

	// function
		AForm	* makeForm(std::string formName, std::string target);

	// exception
		class InvalidFromException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Invalid form type.");
				}
		};

};

#endif
