/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:49:27 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/05 00:29:43 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	FragTrap s("Scavy");

	FragTrap g("Guardian");
	g.attack("un ennemi");
	g.takeDamage(30);
	g.beRepaired(10);
	g.highFivesGuys();

	FragTrap t("Tired");
	for (int i = 0; i < 50; i++)
		t.attack("une cible");
	t.attack("une cible");
	t.beRepaired(5);

	FragTrap d("Doomed");
	d.takeDamage(150);
	d.attack("quelqu'un");
	d.beRepaired(10);
	d.takeDamage(10);

	FragTrap a("Original");
	a.takeDamage(40);
	FragTrap b(a);
	FragTrap c("Autre");
	c = a;
	b.attack("la copie");
	c.attack("l'affecte");

	ClapTrap l("Clappy");
	l.attack("une cible");
}

