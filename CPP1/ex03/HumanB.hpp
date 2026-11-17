/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:17:32 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/17 16:58:48 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public :
	void	attack(void);
	void	setWeapon(Weapon& weapon);
	HumanB(std::string name, Weapon& weapon);
	HumanB(std::string name);
	~HumanB(void);

private :
	Weapon*		weapon;
	std::string	name;
};

#endif

