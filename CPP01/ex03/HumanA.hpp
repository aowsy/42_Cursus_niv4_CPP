/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:40:50 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/01 14:56:54 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"


class HumanA
{

	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack();


	private:

		std::string	_name;
		Weapon		&_weapon;

};

#endif
