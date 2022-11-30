/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:21:01 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/06 11:17:50 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{

	public:

		Zombie(std::string name);
		~Zombie(void);

	// print
		void	announce(void) const;


	private:

		std::string	_name;

};


Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif
