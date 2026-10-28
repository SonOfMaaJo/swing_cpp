/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:46:26 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/28 19:01:49 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

void	HumanA::attack(void) {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name_, Weapon& weapon_) {
	weapon = &weapon_;
	name = name_;
}

HumanA::~HumanA(void) {

}
