/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:23:41 by mdelforg          #+#    #+#             */
/*   Updated: 2023/03/30 13:27:48 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "BtcEx.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: please provide one argument." << std::endl;
		return (1);
	}

	BtcEx	btc;

	btc.exchange(av[1]);


	return (0);
}
