/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:06:45 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/09 20:06:30 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Default Dog's constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog(void) {
	std::cout << "Default Dog's destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog& other) : Animal() {
	std::cout << "Copy Dog's constructor called" << std::endl;
	_type = other.getType();
	_brain = new Brain();
	for (int i = 0; i < 100; i++)
		_brain->setIdeas(i, other._brain->getIdeas(i));
}

Dog&	Dog::operator=(const Dog& other) {
	if (this != &other) {
		this->_type = other.getType();
		for (int i = 0; i < 100; i++)
			_brain->setIdeas(i, other._brain->getIdeas(i));
	}

	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Dogs bark" << std::endl;
}
