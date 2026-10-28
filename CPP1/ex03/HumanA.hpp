/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:43:13 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/28 19:08:33 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_H__
#define _HUMANA_H__

#include "Weapon.hpp"

class HumanA {
public :
	void	attack(void);
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

private :
	Weapon*		weapon;
	std::string	name;
};

#endif

