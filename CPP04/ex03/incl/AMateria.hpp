/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:11 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 14:39:53 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_

# include <iostream>

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

	public:

	// constructors
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria & src);

	// destructor
		virtual ~AMateria();

	// assign operator
		AMateria	& operator=(const AMateria & rhs);

	// getter
		const std::string	& getType() const;

	// functions
		virtual AMateria	* clone() const = 0;
		virtual void		use(ICharacter & target);


	protected:

		std::string	type_;


};

#endif
