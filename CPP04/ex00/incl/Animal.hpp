/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:19:28 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 10:37:13 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

# include <iostream>

class Animal
{

	public:

	// constructors
		Animal(void);
		Animal(std::string type);
		Animal(const Animal & src);

	// destructor
		virtual ~Animal(void);

	// assign operator
		Animal	& operator=(const Animal & rhs);

	// getter
		std::string	getType(void) const;

	// function
		virtual void	makeSound(void) const;


	protected:

		std::string	type_;

};

#endif
