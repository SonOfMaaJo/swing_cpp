/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:18:27 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/28 16:34:47 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int	main(void) {
	Zombie*	zombie = newZombie("zombie1");

	std::cout << "start testing..." << "\n\n\n";
	zombie->announce();
	randomChump("zombie2");
	delete zombie;
	return (0);
}
