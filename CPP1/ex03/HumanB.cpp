/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:19:04 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/17 16:59:53 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstddef>
#include "HumanB.hpp"

void	HumanB::attack(void) {
	if (!weapon) {
		std::cout << name << " has no weapon" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << \
		std::endl;
}

void	HumanB::setWeapon(Weapon& weapon_) {
	weapon = &weapon_;
}

HumanB::~HumanB(void) {

}

HumanB::HumanB(std::string name_, Weapon& weapon_) {
	weapon = &weapon_;
	name = name_;
}

HumanB::HumanB(std::string name_) {
	weapon = NULL;
	name = name_;
}
