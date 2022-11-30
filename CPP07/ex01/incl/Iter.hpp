/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:58:41 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/22 15:30:02 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
# define _ITER_HPP_

#include <iostream>

template <typename T>
void	iter(T *tab, size_t size, void (*f)(const T&))
{
	for (size_t i = 0; i < size; i++)
		(*f)(tab[i]);
	return ;
}

template <typename T>
void	display(const T &dsp)
{
	std::cout << dsp << std::endl;

	return ;
}

#endif
