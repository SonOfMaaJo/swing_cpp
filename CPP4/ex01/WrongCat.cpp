/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:18:33 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/09 18:30:25 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "Default WrongCat's constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat(void) {
	std::cout << "Default WrongCat's destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal() {
	std::cout << "Copy WrongCat's constructor called" << std::endl;
	_type = other.getType();
}

WrongCat&	WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		this->_type = other.getType();
	}

	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "cats meow" << std::endl;
}
