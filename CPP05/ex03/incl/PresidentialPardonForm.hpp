/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:42:22 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/05 15:01:16 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_HPP_
# define _PRESIDENTIALPARDONFORM_HPP_

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

	public:

	// constructors
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm & src);

	// destructor
		~PresidentialPardonForm();

	// assign operator
		PresidentialPardonForm	& operator=(const PresidentialPardonForm & rhs);

	// function
		void	execAction(const Bureaucrat & executor) const;

};

#endif
