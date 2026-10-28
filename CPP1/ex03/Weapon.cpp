/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:33:41 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/28 18:25:07 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_) {
	type = type_;
}

Weapon::Weapon(void) {

}

const	std::string& Weapon::getType(void) {
	const std::string& ref = type;

	return (ref);
}

void	Weapon::setType(std::string type_n) {
	type = type_n;
}
