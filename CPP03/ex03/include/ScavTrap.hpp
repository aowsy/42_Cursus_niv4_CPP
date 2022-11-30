/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:39:29 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/14 13:50:16 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

	public:

	// constructor
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);

	// destructor
		~ScavTrap(void);

	// assign operator
		ScavTrap	& operator=(const ScavTrap & rhs);

	// redefined function
		void	attack(const std::string & target);

	// function
		void	guardGate(void);


};

#endif
