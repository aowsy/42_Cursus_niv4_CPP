/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:58:43 by mdelforg          #+#    #+#             */
/*   Updated: 2022/09/27 09:58:45 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	this->_i= 0;
	this->_count = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

int	Phonebook::get_count() const
{
	return (this->_count);
}

Contact	Phonebook::get_contact(int i) const
{
	return (this->_contact[i]);
}

void	Phonebook::set_contact(Contact contact)
{
	this->_contact[this->_i] = contact;
	if (this->_count < 8)
		this->_count++;
	if (this->_i < 7)
		this->_i++;
	else
		this->_i = 0;
	return ;
}
