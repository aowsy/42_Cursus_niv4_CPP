/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:50:01 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/01 15:03:24 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{

	public:

		HumanB(std::string name);
		~HumanB();

		void	attack() const;
		void	setWeapon(Weapon &weapon);


	private:

		std::string	_name;
		Weapon		*_weapon;

};

#endif
