/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 20:43:51 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/04 22:07:55 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Default constructor called !" << std::endl;
	std::cout << "Missing name !";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10),
	_energyPoints(10), _attackDamage(0) {
	std::cout << "Constructor is called !" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Default destructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other.getName()), _hitPoint(other.getHitPoint()), _energyPoints(other.getEnergyPoints()), _attackDamage(other.getAttackDamage()) {
	std::cout << "Copy constructor called !" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assigment called !" << std::endl;

	if (this != &other) {
		this->_name = other.getName();
		this->_hitPoint = other.getHitPoint();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}

	return (*this);
}

void	ClapTrap::setName(std::string name) {
	_name = name;
}

std::string	ClapTrap::getName(void) const {
	return (_name);
}

void	ClapTrap::setHitPoint(int hitpoint) {
	_hitPoint = hitpoint;
}

int	ClapTrap::getHitPoint(void) const {
	return (_hitPoint);
}

void	ClapTrap::setEnergyPoints(int energyPoint) {
	_energyPoints = energyPoint;
}

int	ClapTrap::getEnergyPoints(void) const {
	return (_energyPoints);
}

void	ClapTrap::setAttackDamage(int attackDamage) {
	_attackDamage = attackDamage;
}

int	ClapTrap::getAttackDamage(void) const {
	return (_attackDamage);
}

void	ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing "
		<< this->_attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " loses " << amount  << " of hit points."
		<< std::endl;
	_hitPoint -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " repairs itself by " << amount << " of hit points." << std::endl;
	_energyPoints -= 1;
	_hitPoint += amount;
}
