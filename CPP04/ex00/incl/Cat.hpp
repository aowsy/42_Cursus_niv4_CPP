/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:03:46 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/21 10:45:32 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

# include "Animal.hpp"

class Cat : public Animal
{

	public:

	// constructors
		Cat(void);
		Cat(const Cat & src);

	// destructor
		~Cat(void);

	// assign operator
		Cat	& operator=(const Cat & rhs);

	// function
		void	makeSound(void) const;

};

#endif
