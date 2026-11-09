/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:49:11 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/09 17:45:43 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(void) : _type("animal") {
	std::cout << "Default constructor animal called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Default destructor animal called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other.getType()) {
	std::cout << "Copy constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	if (this != &other) {
		this->_type = other.getType();
	}

	return (*this);
}

void	Animal::setType(std::string type) {
	_type = type;
}

std::string	Animal::getType(void) const {
	return (_type);
}

void	Animal::makeSound(void) const {
	std::cout << "animal make a sound" << std::endl;
}



