/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:11:06 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/11 17:17:16 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

std::string	const& Cure::_type = "cure";

Cure::Cure(void): AMateria(_type) {
	std::cout << "Default Cure's constructor called" << std::endl;
}

Cure::~Cure(void) {
	std::cout << "Default Cure's destructor called" << std::endl;
}

Cure::Cure(const Cure& other): AMateria(_type) {
	std::cout << "Copy Cure's constructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure& other) {
	return (*this);
}

AMateria*	Cure::clone(void) const {
	AMateria*	clone_ = new Cure();

	return (clone_);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
