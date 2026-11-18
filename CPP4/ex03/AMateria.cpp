/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:04:41 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/13 14:38:06 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type) {
	std::cout << "AMateria's constructor called !" << std::endl;
}

AMateria::AMateria(void) : _type("") {
	std::cout << "Default AMateria's constructor called !" << std::endl;
}

AMateria::AMateria(const AMateria& other) : _type(other._type) {
	std::cout << "Copy AMateria's constructor called !" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& other) {
	// Le type d'une materia ne doit pas changer : on ne copie rien.
	(void)other;
	return (*this);
}

AMateria::~AMateria(void) {
	std::cout << "Default AMateria's destructor called !" << std::endl;
}

std::string	const& AMateria::getType(void) const {
	return (_type);
}

void	AMateria::use(ICharacter& target) {
	(void)target;
}
