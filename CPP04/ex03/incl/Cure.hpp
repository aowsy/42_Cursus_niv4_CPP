/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:49:50 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/01 16:50:34 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_HPP_
# define _CURE_HPP_

# include "AMateria.hpp"

class Cure : public AMateria
{

	public:

	// constructors
		Cure();
		Cure(const Cure & src);

	// destructor
		~Cure();

	// assign operator
		Cure	& operator=(const Cure & rhs);

	// functions
		AMateria	* clone() const;
		void		use(ICharacter & target);

};

#endif
