/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:19:04 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/28 19:08:19 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

void	HumanB::attack(void) {
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
	name = name_;
}
