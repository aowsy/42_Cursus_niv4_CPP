/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:28:29 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/21 10:44:24 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "Animal.hpp"

class Dog : public Animal
{

	public:

	// constructors
		Dog(void);
		Dog(const Dog & src);

	// destructor
		~Dog(void);

	// assign operator
		Dog	& operator=(const Dog & rhs);

	// function
		void	makeSound(void) const;

};

#endif
