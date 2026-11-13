/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:17:10 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/13 15:46:49 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main(void) {
	std::cout << "\n====== TEST 1 : BASIC USAGE =======\n";
	{
		IMateriaSource* src = new MateriaSource();

		AMateria* ice = new Ice();
		AMateria* cure = new Cure();

		src->learnMateria(ice);
		src->learnMateria(cure);

		ICharacter* me = new Character("me");
		ICharacter* bob = new Character("bob");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);


		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;

	}

	std::cout << "\n======= TEST 2: UNKNOW MATERIA =======\n";
	{
		MateriaSource src;

		AMateria* unknown = src.createMateria("fire");
		if (!unknown)
			std::cout << "Unknown materia correctly rejected\n";
		else
			delete unknown;
	}

	std::cout << "\n======= TEST 3: INVENTORY LIMIT =======\n";
	{
		Character player("player");

		player.equip(new Ice());
		player.equip(new Cure());
		player.equip(new Ice());
		player.equip(new Cure());

		// Fifth materia: inventory is full.
		AMateria* fifth = new Ice();
		player.equip(fifth);

		// The test takes responsibility for this rejected materia.
		delete fifth;
	}

	std::cout << "\n====== TEST 4: UNEQUIP ========\n";
	{
		Character player("player");

		AMateria* m = new Ice();
		player.equip(m);
		player.unequip(0);

		// The materia must still exist after unequip.
		std::cout << "Unequiped materia type: "
			<< m->getType() << std::endl;

		delete m;
	}

	std::cout << "\n======= TEST 5: INVALID INDEX ========\n";
	{
		Character player("player");

		player.use(-1, player);
		player.use(4, player);
		player.unequip(-1);
		player.unequip(4);
	}

	std::cout << "\n======= TEST 6: EMPTY SLOT ========\n";
	{
		Character player("player");
		player.use(0, player);
		player.unequip(0);
	}

	std::cout << "\n======= TEST 7: CHARACTER COPY ========\n";
	{
		Character original("original");

		original.equip(new Ice());
		original.equip(new Cure());

		Character copy(original);

		original.use(0, copy);
		copy.use(1, original);
	}

	std::cout << "\n======= TEST 8: CHARACTER ASSIGMENT =======\n";
	{
		Character a("A");
		Character b("B");

		a.equip(new Ice());
		a.equip(new Cure());

		b.equip(new Cure());

		b = a;

		b.use(0, a);
		b.use(1, a);
	}

	std::cout << "\n======== TEST 9: MATERIA SOURCE LIMIT ========\n";
	{
		MateriaSource src;

		src.learnMateria(new Ice());
		src.learnMateria(new Cure());
		src.learnMateria(new Ice());
		src.learnMateria(new Cure());

		// Fifth template must not be stored.
		AMateria* fifth = new Ice();
		src.learnMateria(fifth);

		delete fifth;

		AMateria* m = src.createMateria("ice");
		if (m) {
			std::cout << "Created: " << m->getType() << std::endl;
			delete m;
		}
	}

	std::cout << "\n======== END OF TESTS ========\n";
	return (0);
}
