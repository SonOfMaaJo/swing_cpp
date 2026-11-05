/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 22:40:09 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/05 01:08:12 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_H__
#define _SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap(void);
		ScavTrap&	operator=(const ClapTrap& other);
		void		attack(const std::string&);
		void		guardGate(void);
		static const int	defaultHitPoints;
		static const int	defaultEnergyPoints;
		static const int	defaultAttackDamage;
};

#endif
