/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:02:32 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/22 15:26:07 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_HPP_
# define _WHATEVER_HPP_

template <typename T>
void	swap(T &lhs, T &rhs)
{
	T	tmp;

	tmp = lhs;
	lhs = rhs;
	rhs = tmp;

	return ;
}

template <typename T>
T	min(const T &lhs, const T &rhs)
{
	return (lhs < rhs ? lhs : rhs);
}

template <typename T>
T	max(const T &lhs, const T &rhs)
{
	return (lhs > rhs ? lhs : rhs);
}

#endif
