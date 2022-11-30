/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:58:21 by mdelforg          #+#    #+#             */
/*   Updated: 2022/09/27 09:58:22 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}


/*				getters				*/

std::string	Contact::get_firstname() const
{
	return (this->_first_name);
}

std::string	Contact::get_lastname() const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname() const
{
	return (this->_nickname);
}

std::string	Contact::get_phonenbr() const
{
	return (this->_phone_nbr);
}

std::string	Contact::get_drksecret() const
{
	return (this->_drk_secret);
}


/*				setters				*/

void	Contact::set_firstname(std::string str)
{
	this->_first_name = str;
	return ;
}

void	Contact::set_lastname(std::string str)
{
	this->_last_name = str;
	return ;
}

void	Contact::set_nickname(std::string str)
{
	this->_nickname = str;
	return ;
}

void	Contact::set_phonenbr(std::string str)
{
	this->_phone_nbr = str;
	return ;
}

void	Contact::set_drksecret(std::string str)
{
	this->_drk_secret = str;
	return ;
}
