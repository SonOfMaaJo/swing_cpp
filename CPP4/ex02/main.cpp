/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:25:57 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/10 19:51:15 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

int	main(void) {
	std::cout << "======== TEST 1: INSTANCIATION =========" << std::endl;
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	std::cout << "======== END ========" << std::endl;
	std::cout << "======== TEST 2: TYPES  ===========" << std::endl;
	std::cout << "Dog type: " << dog->getType() << std::endl;
	std::cout << "Cat type: " << cat->getType() << std::endl;
	std::cout << "======== END ========" << std::endl;
	std::cout << "========= TEST 3: POLYMORPHISME  ===========" << std::endl;
	dog->makeSound();
	cat->makeSound();
	std::cout << "========= END =======" << std::endl;
	std::cout << "======== TEST 4: MORE POLYMORPHISM =========" << std::endl;
	{
		AAnimal* animals[4];

		animals[0] = new Dog();
		animals[1] = new Dog();
		animals[2] = new Cat();
		animals[3] = new Cat();

		for (int i = 0; i < 4; i++)
		{
			std::cout << animals[i]->getType() << " " << std::endl;
			animals[i]->makeSound();
		}

		std::cout << "======== DELETING ANIMALS ============" << std::endl;

		for (int i = 0; i < 4; i++)
			delete animals[i];
	}
	std::cout << "======== TEST 5: DOG DEEP COPY ===========" << std::endl;
	{
		Dog dog1;

		{
			Dog dog2(dog1);
			Dog dog3;
			dog3 = dog1;


			std::cout << "Dog copies created" << std::endl;
		}

		std::cout << "Original dog still exists!" << std::endl;
	}
	std::cout << "========= TEST 4: CAT DEEP COPY ===========" << std::endl;
	{
		Cat cat1;
		{
			Cat	cat2(cat1);
			Cat	cat3;

			cat3 = cat1;
			std::cout << "Cat copies created" << std::endl;
		}
		std::cout << "Original cat still exists!" << std::endl;
	}
	delete dog;
	delete cat;
	std::cout << "========== END OF TESTS ============" << std::endl;
	return (0);
}
