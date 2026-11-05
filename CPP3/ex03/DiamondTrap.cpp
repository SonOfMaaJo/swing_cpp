/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 01:00:29 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/05 02:08:31 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "FragTrap Default constructor called !" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
	FragTrap(name), ScavTrap(name), _name(name) {
		std::cout << "DiamondTrap constructor is called !" << std::endl;
		_hitPoint = FragTrap::defaultHitPoints;
		_energyPoints = ScavTrap::defaultEnergyPoints;
		_attackDamage = FragTrap::defaultAttackDamage;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "Default DiamondTrap destructor is called !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other),
	FragTrap(other), ScavTrap(other), _name(other._name) {
	std::cout << "DiamondTrap copy assigment is called !" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		_name = other._name;
	}

	return (*this);
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {

	std::cout << "I am " << _name
		<< ", and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
