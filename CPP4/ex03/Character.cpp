/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:44:18 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/13 14:30:38 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"

Character::Character(std::string const& name): _name(name) {
	std::cout << "Default Character's constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_slot[i] = 0;
}

Character::Character(const Character& other): _name(other.getName()) {
	std::cout << "Copy Character's constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		_slot[i] = 0;
		if (other._slot[i])
			_slot[i] = other._slot[i]->clone();
	}
}

Character::~Character(void) {
	std::cout << "Default Character's destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete _slot[i];
}

Character&	Character::operator=(const Character& other) {
	if (this != &other) {
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			delete _slot[i];
			_slot[i] = 0;
			if (other._slot[i])
				_slot[i] = other._slot[i]->clone();
		}
	}

	return (*this);
}

std::string const&	Character::getName(void) const {
	return (_name);
}

void	Character::equip(AMateria* m) {
	int	i = 0;

	if (!m)
		return ;
	for (int j = 0; j < 4; j++)
		if (_slot[j] == m)
			return ;
	while (i < 4 && _slot[i])
		i++;
	if (i < 4)
		_slot[i] = m;
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		_slot[idx] = 0;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && _slot[idx])
		_slot[idx]->use(target);
}
