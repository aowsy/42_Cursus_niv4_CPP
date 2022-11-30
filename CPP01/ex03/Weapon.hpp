/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:30:21 by mdelforg          #+#    #+#             */
/*   Updated: 2022/09/30 18:13:25 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{

	public:

		Weapon(std::string weapon);
		~Weapon();

	// getters
		const std::string	getType() const;

	// setters
		void	setType(std::string type);

	private:

		std::string	_type;

};

#endif
