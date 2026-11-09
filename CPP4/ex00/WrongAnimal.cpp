/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:49:11 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/09 18:27:56 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("animal") {
	std::cout << "Default constructor animal called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Default destructor animal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other.getType()) {
	std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		this->_type = other.getType();
	}

	return (*this);
}

void	WrongAnimal::setType(std::string type) {
	_type = type;
}

std::string	WrongAnimal::getType(void) const {
	return (_type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Wrong animal make a sound" << std::endl;
}



