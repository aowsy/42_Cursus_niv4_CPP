/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:45:57 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/04 10:48:32 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HARL_HPP
# define HARL_HPP

class Harl
{

	public:

		Harl();
		~Harl();

		void	complain(std::string level);


	private:

		void	debug();
		void	info();
		void	warning();
		void	error();

};

#endif
