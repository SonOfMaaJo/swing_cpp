/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 20:44:12 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/04 21:39:54 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_H__
#define _CLAPTRAP_H__

#include <string>

class	ClapTrap{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap& other);
		ClapTrap&	operator=(const ClapTrap& other);
		void		setName(std::string name);
		std::string	getName(void) const;
		void		setHitPoint(int hitpoint);
		int			getHitPoint(void) const;
		void		setEnergyPoints(int energyPoint);
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
		void		setAttackDamage(int attackDamage);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int	amount);

	private:
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif
