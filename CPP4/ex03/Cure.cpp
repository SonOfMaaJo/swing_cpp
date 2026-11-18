/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:11:06 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/13 14:33:59 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"
#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {
	std::cout << "Default Cure's constructor called" << std::endl;
}

Cure::~Cure(void) {
	std::cout << "Default Cure's destructor called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other) {
	std::cout << "Copy Cure's constructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure& other) {
	AMateria::operator=(other);
	return (*this);
}

AMateria*	Cure::clone(void) const {
	AMateria*	clone_ = new Cure(*this);

	return (clone_);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
