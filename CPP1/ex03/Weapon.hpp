/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:30:03 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/28 18:24:41 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H__
#define _WEAPON_H__

#include <string>

class Weapon {
public :
	const std::string&	getType(void);
	void				setType(std::string new_type);

	Weapon(std::string type);
	Weapon(void);
private :
	std::string type;
};

#endif
