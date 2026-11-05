/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:49:27 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/04 22:02:11 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	clapA("A");
	ClapTrap	clapB;

	clapB = ClapTrap("B");

	clapA.attack("B");
	clapB.takeDamage(10);
	std::cout << "hit point of ClaTrap " << clapB.getName() << " is " << clapB.getHitPoint() << std::endl;
	clapB.beRepaired(5);
	std::cout << "hit point of ClaTrap " << clapB.getName() << " is " << clapB.getHitPoint() << std::endl;
}

