/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:28:29 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/21 12:50:33 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

	// constructors
		Dog(void);
		Dog(const Dog & src);

	// destructor
		~Dog(void);

	// assign operator
		Dog			& operator=(const Dog & rhs);

	// getters
		Brain		* getBrain(void) const;
		std::string	getIdea(int i) const;

	// setter
		void		setIdea(std::string idea);

	// function
		void		makeSound(void) const;


	private:

		Brain	*_brain;

};

#endif
