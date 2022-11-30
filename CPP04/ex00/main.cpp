/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:30:38 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 13:05:49 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "----- Good Animals -----" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* i = new Cat();
		const Animal* j = new Dog();

		std::cout << std::endl;
		std::cout << "Type = " << meta->getType() << " " << std::endl;
		std::cout << "Type = " << i->getType() << " " << std::endl;
		std::cout << "Type = " << j->getType() << " " << std::endl;
		std::cout << std::endl;
		meta->makeSound();
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		std::cout << std::endl;

		delete meta;
		delete i;
		delete j;
	}
	std::cout << std::endl << "----- Wrong Animals -----" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		const Animal* j = new Dog();

		std::cout << std::endl;
		std::cout << "Type = " << meta->getType() << " " << std::endl;
		std::cout << "Type = " << i->getType() << " " << std::endl;
		std::cout << "Type = " << j->getType() << " " << std::endl;
		std::cout << std::endl;
		meta->makeSound();
		i->makeSound(); //will output the animal sound!
		j->makeSound();
		std::cout << std::endl;

		delete meta;
		delete i;
		delete j;
	}
	return (0);
}
