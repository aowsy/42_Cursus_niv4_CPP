/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:00:43 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 13:46:39 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "----- PDF Test -----" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;

		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl << "----- My Test -----" << std::endl;
	{
		Animal* animals[4];
		for (int i = 0; i < 4; i++)
		{
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			std::cout << std::endl;
		}
		Dog *dog_ptr((Dog *)animals[0]);
		Cat *cat_ptr((Cat *)animals[1]);
		std::cout << std::endl;

		dog_ptr->setIdea("Woof woof = Mon maitre est Dieu!");
		cat_ptr->setIdea("Meow = Je suis Dieu!");
		std::cout << dog_ptr->getBrain()->getIdea(0) << std::endl;
		std::cout << cat_ptr->getBrain()->getIdea(0) << std::endl;
		for (int i = 1; i < 100; i++)
		{
			dog_ptr->setIdea("Dog idea nº" + std::to_string(i));
			cat_ptr->setIdea("Cat idea nº" + std::to_string(i));
		}
		std::cout << dog_ptr->getBrain()->getIdea(42) << std::endl;
		std::cout << cat_ptr->getBrain()->getIdea(42) << std::endl;
		std::cout << std::endl;

		for (int i = 0; i < 4; i++)
		{
			delete animals[i];
			std::cout << std::endl;
		}
	}
	return (0);
}
