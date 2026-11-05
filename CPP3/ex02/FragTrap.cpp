/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 22:40:01 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/05 00:38:21 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap Default constructor called !" << std::endl;
	std::cout << "Missing name !";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
		std::cout << "FragTrap constructor is called !" << std::endl;
		_hitPoint = 100;
		_energyPoints = 100;
		_attackDamage = 30;
}

FragTrap::~FragTrap(void) {
	std::cout << "Default FragTrap destructor is called !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called !" << std::endl;
}

FragTrap&	FragTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}

	return (*this);
}

void	FragTrap::attack(const std::string& target) {
	if (_hitPoint <= 0) {
		std::cout << "FragTrap " << _name <<
			" can't attack : 0 hit points." << std::endl;
		return ;
	} else if (_energyPoints <= 0) {
		std::cout << "FragTrap " << _name << " can't attack : 0 energy points"
			<< std::endl;
		return ;
	} else {
		std::cout << "FragTrap " << _name << " attacks " << target << " causing "
		<< _attackDamage << " points of damage !" << std::endl;
		_energyPoints -= 1;
	}
}

void	FragTrap::highFivesGuys(void) {
	if (_hitPoint || _energyPoints) {
		std::cout << "FragTrap " << _name
			<< " don't have enough energy or hit points" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " raises a hand : High five, guys!"
		<< std::endl;
}
