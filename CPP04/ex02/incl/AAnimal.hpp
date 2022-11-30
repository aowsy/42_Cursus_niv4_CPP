/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:36:19 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 12:29:23 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AANIMAL_HPP_
# define _AANIMAL_HPP_

# include <iostream>

class AAnimal
{

	public:

	// constructors
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal & src);

	// destructor
		virtual ~AAnimal(void);

	// assign operator
		AAnimal	& operator=(const AAnimal & rhs);

	// getter
		std::string	getType(void) const;

	// function
		virtual void	makeSound(void) const = 0;


	protected:

		std::string	type_;

};

#endif
