/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:48:13 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/13 14:33:45 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"
#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	std::cout << "Default Ice's constructor called" << std::endl;
}

Ice::~Ice(void) {
	std::cout << "Default Ice's destructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other) {
	std::cout << "Copy Ice's constructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& other) {
	AMateria::operator=(other);
	return (*this);
}

AMateria*	Ice::clone(void) const {
	AMateria*	clone_ = new Ice(*this);

	return (clone_);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<
		std::endl;
}
