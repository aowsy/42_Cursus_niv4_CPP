/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:58:08 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/04 15:03:02 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.class.hpp"

void	put_contact(Contact contact)
{
	std::cout << " -First name: " << contact.get_firstname() << std::endl;
	std::cout << " -Last name: " << contact.get_lastname() << std::endl;
	std::cout << " -Nickname: " << contact.get_nickname() << std::endl;
	std::cout << " -Phone number: " << contact.get_phonenbr() << std::endl;
	std::cout << " -Darkest secret: " << contact.get_drksecret() << std::endl;
	std::cout << std::endl;
	return ;
}

void	put_unit(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.push_back('.');
	}
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << str;
	std::cout << "|";
	return ;
}

void	put_contactlist(Phonebook *phonebook)
{
	Contact	contact;

	std::cout << std::endl << "--------------- List of contacts ---------------" << std::endl;
	for (int i = 0; i < phonebook->get_count(); i++)
	{
		contact = phonebook->get_contact(i);
		std::cout << "|         " << i << "|";
		put_unit(contact.get_firstname());
		put_unit(contact.get_lastname());
		put_unit(contact.get_nickname());
		std::cout << std::endl;
	}
	std::cout << "------------------------------------------------" << std::endl << std::endl;
	return ;
}

int	strtoi(std::string str)
{
	if (str.length() != 1)
		return (-1);
	if (str[0] < '0' || str[0] > '9')
		return (-1);
	else
		return (str[0] - '0');
}

void	search_contact(Phonebook *phonebook)
{
	std::string	input;
	int			nb;

	if (!phonebook->get_count())
	{
		std::cout << "The phonebook is empty" << std::endl;
		return ;
	}
	put_contactlist(phonebook);
	std::cout << "Index of the contact: ";
	std::getline(std::cin, input);
	nb = strtoi(input);
	if (nb < 0 || nb > phonebook->get_count() - 1)
		std::cout << "This contact doesn't exist. Try with another index." << std::endl << std::endl;
	else
		put_contact(phonebook->get_contact(nb));
	return ;
}

void	new_contact(Phonebook *phonebook)
{
	std::string	input;
	Contact		contact;

	std::cout << std::endl << "New contact" << std::endl;
	std::cout << " -First name: ";
	std::getline(std::cin, input);
	contact.set_firstname(input);
	std::cout << " -Last name: ";
	std::getline(std::cin, input);
	contact.set_lastname(input);
	std::cout << " -Nickname: ";
	std::getline(std::cin, input);
	contact.set_nickname(input);
	std::cout << " -Phone number: ";
	std::getline(std::cin, input);
	contact.set_phonenbr(input);
	std::cout << " -Darkest secret: ";
	std::getline(std::cin, input);
	contact.set_drksecret(input);
	phonebook->set_contact(contact);
	std::cout << "New contact added" << std::endl << std::endl;
	return ;
}


int	main()
{
	Phonebook	phonebook;

	std::string input;
	while (input != "exit")
	{
		std::cout << "Your command is: " << std::endl;
		std::getline(std::cin, input);

		if (std::cin.eof())
			break ;

		if (input == "ADD")
			new_contact(&phonebook);
		else if (input == "SEARCH")
			search_contact(&phonebook);
		else if (input == "EXIT")
			return (0);
	}
	std::cout << "Exit program" << std::endl;
	return (0);
}
