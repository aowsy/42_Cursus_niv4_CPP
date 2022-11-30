/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:47:08 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/15 18:07:55 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DATA_HPP_
# define _DATA_HPP_

# include <iostream>

class Data
{

	public:

	// constructors
		Data();
		Data(const Data & src);
		Data(std::string name);

	// destructor
		~Data();

	// assign operator
		Data	& operator=(const Data & rhs);

	// getter
		std::string	getName() const;


	private:

		std::string	_name;

};

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif
