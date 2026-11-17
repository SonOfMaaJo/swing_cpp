/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:30:03 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/17 16:54:37 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
public :
	const std::string&	getType(void) const;
	void				setType(std::string new_type);

	Weapon(std::string type);
	Weapon(void);
private :
	std::string type;
};

#endif
