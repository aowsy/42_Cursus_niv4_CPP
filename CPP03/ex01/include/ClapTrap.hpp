/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:59:14 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/03 13:26:34 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

	public:

	// constructors
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int energy, int damage);
		ClapTrap(ClapTrap const & src);

	// destructor
		~ClapTrap(void);

	// assign operator
		ClapTrap	& operator=(const ClapTrap & rhs);

	// functions
		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);


	protected:

		std::string		_name;
		unsigned int	_hp;
		unsigned int	_energy;
		unsigned int	_damage;

};

#endif
