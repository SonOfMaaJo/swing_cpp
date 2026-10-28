/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:17:32 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/28 19:08:43 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_H__
#define _HUMANB_H__

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

