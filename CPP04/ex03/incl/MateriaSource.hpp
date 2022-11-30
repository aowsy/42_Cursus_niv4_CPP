/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:41:57 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/02 16:16:23 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIASOURCE_HPP_
# define _MATERIASOURCE_HPP_

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	public:

	// constructors
		MateriaSource();
		MateriaSource(const MateriaSource & src);

	// destructor
		~MateriaSource();

	// assign operator
		MateriaSource	& operator=(const MateriaSource & rhs);

	// functions
		void		learnMateria(AMateria *rhs);
		AMateria	* createMateria(const std::string & type);


	private:

		AMateria	*_tab[4];

};

#endif
