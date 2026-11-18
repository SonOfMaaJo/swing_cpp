/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:18:33 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/09 20:04:48 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Default Cat's constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::~Cat(void) {
	std::cout << "Default Cat's destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Copy Cat's constructor called" << std::endl;
	_brain = new Brain();
	for (int i = 0; i < 100; i++)
		_brain->setIdeas(i, other._brain->getIdeas(i));
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other) {
		Animal::operator=(other);
		for (int i = 0; i < 100; i++)
			_brain->setIdeas(i, other._brain->getIdeas(i));
	}

	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "cats meow" << std::endl;
}
