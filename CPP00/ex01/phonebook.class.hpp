/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:58:54 by mdelforg          #+#    #+#             */
/*   Updated: 2022/09/27 09:58:56 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "contact.class.hpp"


class Phonebook
{

	public:

		Phonebook();
		~Phonebook();

	// getters
		int		get_count() const;
		Contact	get_contact(int i) const;

	// setters
		void	set_contact(Contact contact);


	private:

		unsigned int	_i;
		unsigned int	_count;
		Contact			_contact[8];

};


#endif
