/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:49:27 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/05 02:03:38 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
    {
	    DiamondTrap d("Diamond");
    }

    {
	    DiamondTrap d("Diamond");
        d.whoAmI();             // "Diamond" et "Diamond_clap_name"
        d.attack("un ennemi");  // message de ScavTrap, 30 degats (FragTrap)
        d.guardGate();          // vient de ScavTrap
        d.highFivesGuys();
    }

    {
	    DiamondTrap d("Tank");
        d.takeDamage(99);       // encore en vie avec 1 PV
        d.attack("une cible");  // doit fonctionner
        d.takeDamage(1);        // 0 PV
        d.attack("une cible");
    }

    {
	    DiamondTrap d("Tired");
        for (int i = 0; i < 50; i++)
            d.attack("une cible");
        d.attack("une cible");  // la 51e doit echouer
        d.beRepaired(5); // doit echouer aussi
    }

    {
	    DiamondTrap a("Original");
        a.takeDamage(40);
        DiamondTrap b(a);
        b.whoAmI();             // "Original" et "Original_clap_name"
        b.takeDamage(59);       // 60 -> 1 PV : doit rester en vie
        b.attack("la copie");   // doit fonctionner
    }

    {
	    DiamondTrap a("Original");
        DiamondTrap c("Autre");
        a.takeDamage(40);
        c = a;
        c.whoAmI();             // doit maintenant afficher "Original"
        c.takeDamage(60);       // 60 -> 0 PV : doit mourir
        c.attack("quelqu'un"); // doit echouer
    }

	return (0);
}

