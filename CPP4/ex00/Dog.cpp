/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:06:45 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/09 18:43:00 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Default Dog's constructor called" << std::endl;
	_type = "Dog";
}

Dog::~Dog(void) {
	std::cout << "Default Dog's destructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Copy Dog's constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& other) {
	if (this != &other) {
		Animal::operator=(other);
	}

	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Dogs bark" << std::endl;
}
