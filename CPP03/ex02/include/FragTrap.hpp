/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:07:27 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/07 14:17:01 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

	// constructor
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);

	// destructor
		~FragTrap(void);

	// assign operator
		FragTrap	& operator=(const FragTrap & rhs);

	// function
		void	attack(const std::string & target);
		void	highFivesGuys(void);


};

#endif
