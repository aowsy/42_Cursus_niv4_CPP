/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:06:27 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/02 16:25:59 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

# include "ICharacter.hpp"

class Character : public ICharacter
{

	public:

	// constructors
		Character();
		Character(std::string name);
		Character(const Character & src);

	// destructor
		~Character();

	// assign operator
		Character	& operator=(const Character & rhs);

	// getter
		const std::string	& getName() const;

	// functions
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);


	private:

		std::string	_name;
		AMateria		*_inventory[4];

};

#endif
