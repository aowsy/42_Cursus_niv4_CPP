/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:02:55 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/01 16:49:26 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_HPP_
# define _ICE_HPP_

# include "AMateria.hpp"

class Ice : public AMateria
{

	public:

	// constructors
		Ice();
		Ice(const Ice & src);

	// destructor
		~Ice();

	// assign operator
		Ice	& operator=(const Ice & rhs);

	// functions
		AMateria	* clone() const;
		void		use(ICharacter & target);

};

#endif
