/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:58:31 by mdelforg          #+#    #+#             */
/*   Updated: 2022/09/27 09:58:33 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact
{

	public:

		Contact();
		~Contact();

	// getters
		std::string	get_firstname() const;
		std::string	get_lastname() const;
		std::string	get_nickname() const;
		std::string	get_phonenbr() const;
		std::string	get_drksecret() const;

	// setters
		void	set_firstname(std::string str);
		void	set_lastname(std::string str);
		void	set_nickname(std::string str);
		void	set_phonenbr(std::string str);
		void	set_drksecret(std::string str);

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_nbr;
		std::string	_drk_secret;

};


#endif
