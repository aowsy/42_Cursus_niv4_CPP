/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:52:00 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/20 14:41:47 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::cout << "New zombie -> ";
	Zombie	*zombie1 = newZombie("Bertrand");

	std::cout << "Random chump -> ";
	randomChump("Cedric");

	delete(zombie1);

	return (0);
}
