/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:37:38 by mdelforg          #+#    #+#             */
/*   Updated: 2022/09/30 15:59:37 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{

	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

	// print
		void	announce(void) const;

	// setters
		void	setName(std::string name);


	private:

		std::string	_name;

};


Zombie	*zombieHorde(int N, std::string name);


#endif
