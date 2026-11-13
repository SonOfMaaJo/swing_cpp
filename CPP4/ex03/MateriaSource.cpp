/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:53:08 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/13 15:44:40 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	std::cout << "Default MateriaSource's constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_knowledge[i] = 0;
	nbknow = 0;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	std::cout << "Copy MateriaSource's constructor called" << std::endl;
	nbknow = other.nbknow;
	for (int i = 0; i < 4; i++) {
		_knowledge[i] = 0;
		if (other._knowledge[i])
			_knowledge[i] = other._knowledge[i]->clone();
	}
}

MateriaSource::~MateriaSource(void) {
	std::cout << "Default MateriaSource's destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete _knowledge[i];
}


MateriaSource&	MateriaSource::operator=(const MateriaSource& other) {
	nbknow = other.nbknow;
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			delete _knowledge[i];
			_knowledge[i] = 0;
			if (other._knowledge[i])
				_knowledge[i] = other._knowledge[i]->clone();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m) {
	if (nbknow < 4) {
		_knowledge[nbknow++] = m;
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < nbknow && i < 4; i++) {
		if (_knowledge[i]) {
			if (_knowledge[i]->getType() == type)
				return (_knowledge[i]->clone());
		}
	}
	return (0);
}
