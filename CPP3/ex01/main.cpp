/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:49:27 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/04 23:57:05 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap s("Scavy");

	ScavTrap g("Guardian");
	g.attack("un ennemi");
	g.takeDamage(30);
	g.beRepaired(10);
	g.guardGate();

	ScavTrap t("Tired");
	for (int i = 0; i < 50; i++)
		t.attack("une cible");
	t.attack("une cible");
	t.beRepaired(5);

	ScavTrap d("Doomed");
	d.takeDamage(150);
	d.attack("quelqu'un");
	d.beRepaired(10);
	d.takeDamage(10);

	ScavTrap a("Original");
	a.takeDamage(40);
	ScavTrap b(a);
	ScavTrap c("Autre");
	c = a;
	b.attack("la copie");
	c.attack("l'affecte");

	ClapTrap l("Clappy");
	l.attack("une cible");
}

