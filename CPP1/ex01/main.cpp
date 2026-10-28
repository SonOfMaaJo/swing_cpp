/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:18:27 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/28 16:59:07 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(void) {
	Zombie*	zombies = zombieHorde(10, "zombies_v2");
	if (zombies) {
		for(int i = 0; i < 10; i++)
			zombies[i].announce();
		delete[] zombies;
	}
	else {
		std::cerr << "Allocation fail !!!!\n";
	}
	return (0);
}
