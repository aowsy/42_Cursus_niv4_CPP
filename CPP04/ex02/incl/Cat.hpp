/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:03:46 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/31 13:41:25 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{

	public:

	// constructors
		Cat(void);
		Cat(const Cat & src);

	// destructor
		~Cat(void);

	// assign operator
		Cat	& operator=(const Cat & rhs);

	// getters
		Brain		* getBrain(void) const;
		std::string	getIdea(int i) const;

	// setter
		void		setIdea(std::string);

	// function
		void		makeSound(void) const;


	private:

		Brain	*_brain;

};

#endif
