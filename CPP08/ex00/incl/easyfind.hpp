/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:08:34 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/25 15:02:33 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
# define _EASYFIND_HPP_

# include <exception>
# include <algorithm>

class NotInContainer : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("The occurence isn't in the container.");
		}
};

template <typename T>
typename T::iterator	easyfind(T &ctr, int nb)
{
	typename T::iterator	rtn = std::find(ctr.begin(), ctr.end(), nb);

	if (rtn == ctr.end())
		throw NotInContainer();
	return (rtn);
}

#endif
