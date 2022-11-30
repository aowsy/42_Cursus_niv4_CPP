/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:38:07 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/08 13:53:23 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << std::endl << "----- My Test -----" << std::endl;
	{
//		AAnimal meta = new AAnimal(); //Does not work abstract
		AAnimal* AAnimals[4];
		for (int i = 0; i < 4; i++)
		{
			if (i % 2 == 0)
				AAnimals[i] = new Dog();
			else
				AAnimals[i] = new Cat();
			std::cout << std::endl;
		}
		Dog *dog_ptr((Dog *)AAnimals[0]);
		Cat *cat_ptr((Cat *)AAnimals[1]);
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
			delete AAnimals[i];
			std::cout << std::endl;
		}
	}
	return (0);
}
