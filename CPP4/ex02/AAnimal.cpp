/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:49:11 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/10 19:39:12 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("animal") {
	std::cout << "Default constructor animal called" << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "Default destructor animal called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : _type(other.getType()) {
	std::cout << "Copy constructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other) {
	if (this != &other) {
		this->_type = other.getType();
	}

	return (*this);
}

void	AAnimal::setType(std::string type) {
	_type = type;
}

std::string	AAnimal::getType(void) const {
	return (_type);
}
