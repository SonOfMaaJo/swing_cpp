/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:48:13 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/11 15:28:37 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

std::string const& Ice::_type = "ice";

Ice::Ice(void) : AMateria(_type) {
	std::cout << "Default Ice's constructor called" << std::endl;
}

Ice::~Ice(void) {
	std::cout << "Default Ice's destructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(_type) {
	std::cout << "Copy Ice's constructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice&) {
	return (*this);
}

AMateria*	Ice::clone(void) const {
	AMateria*	clone_ = new Ice();

	return (clone_);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<
		std::endl;
}
