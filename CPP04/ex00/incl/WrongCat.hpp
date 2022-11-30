/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:10:01 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/21 11:12:03 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGCAT_HPP_
# define _WRONGCAT_HPP_

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

	// constructors
		WrongCat(void);
		WrongCat(const WrongCat & src);

	// destructor
		~WrongCat(void);

	// assign operator
		WrongCat	& operator=(const WrongCat & rhs);

	// function
		void	makeSound(void) const;

};

#endif
