/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:37:19 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/02 15:40:41 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _IMATERIASOURCE_HPP_
# define _IMATERIASOURCE_HPP_

# include "AMateria.hpp"

class IMateriaSource
{

	public:

		virtual	~IMateriaSource() {}

		virtual void		learnMateria(AMateria *) = 0;
		virtual AMateria	* createMateria(std::string const & type) = 0;

};

#endif
