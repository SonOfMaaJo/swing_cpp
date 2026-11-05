/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 22:40:01 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/05 00:08:33 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap Default constructor called !" << std::endl;
	std::cout << "Missing name !";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
		std::cout << "ScavTrap constructor is called !" << std::endl;
		_hitPoint = 100;
		_energyPoints = 50;
		_attackDamage = 20;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Default ScavTrap destructor is called !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called !" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}

	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_hitPoint <= 0) {
		std::cout << "ScavTrap " << this->_name <<
			" can't attack : 0 hit points." << std::endl;
		return ;
	} else if (this->_energyPoints <= 0) {
		std::cout << "ScavTrap " << this->_name << " can't attack : 0 energy points"
			<< std::endl;
		return ;
	} else {
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing "
		<< this->_attackDamage << " points of damage !" << std::endl;
		_energyPoints -= 1;
	}
}


void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
