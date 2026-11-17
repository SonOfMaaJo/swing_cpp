/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:43:13 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/17 16:54:01 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public :
	void	attack(void);
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

private :
	Weapon		&weapon;
	std::string	name;
};

#endif

