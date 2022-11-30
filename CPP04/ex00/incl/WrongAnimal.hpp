/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:05:56 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 13:02:53 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_HPP_
# define _WRONGANIMAL_HPP_

# include <iostream>

class WrongAnimal
{

	public:

	// constructors
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal & src);

	// destructor
		~WrongAnimal(void);

	// assign operator
		WrongAnimal	& operator=(const WrongAnimal & rhs);

	// getter
		std::string	getType(void) const;

	// function
		void	makeSound(void) const;


	protected:

		std::string	type_;

};

#endif
