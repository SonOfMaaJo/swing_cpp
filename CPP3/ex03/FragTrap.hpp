/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 22:40:09 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/05 01:06:02 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		~FragTrap(void);
		FragTrap&	operator=(const FragTrap& other);
		void		attack(const std::string&);
		void		highFivesGuys(void);
		static const int	defaultHitPoints;
		static const int	defaultEnergyPoints;
		static const int	defaultAttackDamage;
};

#endif
