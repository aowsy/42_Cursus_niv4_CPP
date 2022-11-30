/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:30:23 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/05 15:15:12 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYREQUESTFROM_HPP_
# define _ROBOTOMYREQUESTFROM_HPP_

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

	public:

	// constructors
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & src);

	// destructor
		~RobotomyRequestForm();

	// assign operator
		RobotomyRequestForm	& operator=(const RobotomyRequestForm & rhs);

	// function
		void	execAction(const Bureaucrat & executor) const;

};

#endif
