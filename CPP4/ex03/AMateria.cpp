/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:04:41 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/11 17:17:15 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type) {
	std::cout << "AMateria's constructor called !" << std::endl;
}

AMateria::~AMateria(void) {
	std::cout << "Default AMateria's destructor called !" << std::endl;
}

std::string	const& AMateria::getType(void) const {
	return (_type);
}

