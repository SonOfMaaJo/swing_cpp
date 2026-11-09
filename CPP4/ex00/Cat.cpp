/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:18:33 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/09 17:36:27 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Default Cat's constructor called" << std::endl;
	_type = "Cat";
}

Cat::~Cat(void) {
	std::cout << "Default Cat's destructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal() {
	std::cout << "Copy Cat's constructor called" << std::endl;
	_type = other.getType();
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other) {
		this->_type = other.getType();
	}

	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "cats meow" << std::endl;
}
