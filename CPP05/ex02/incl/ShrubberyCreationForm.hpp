/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:29:52 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/05 14:57:32 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_HPP_
# define _SHRUBBERYCREATIONFORM_HPP_

# include <fstream>

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{

	public:

	// constructors
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & src);

	// destructor
		~ShrubberyCreationForm();

	// assign operator
		ShrubberyCreationForm	& operator=(const ShrubberyCreationForm & rhs);

	// function
		void	execAction(const Bureaucrat & executor) const;

};

#endif
