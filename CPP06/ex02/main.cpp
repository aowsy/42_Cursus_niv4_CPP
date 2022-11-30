/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:09:48 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/21 15:33:45 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include <iostream>

int	main(void)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < 6; i++)
	{
		Base	*test = generate();
		identify(test);
		identify(*test);
		delete test;
	}
	return 0;
}
