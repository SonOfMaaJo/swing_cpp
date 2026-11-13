/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:56:32 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/13 19:31:59 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void) {
	std::cout << "====== TEST 1: CONSTRUCTION ======" << std::endl;
	try {
		Bureaucrat bob("Bob", 42);
		Bureaucrat alice("Alice", 1);
		Bureaucrat john("john", 150);

		std::cout << bob << std::endl;
		std::cout << alice << std::endl;
		std::cout << john << std::endl;

		std::cout << "\n======= TEST 2: GETTERS =========" << std::endl;
		std::cout << "Name: " << bob.getName() << std::endl;
		std::cout << "Grade: " << bob.getGrade() << std::endl;

		std::cout << "\n======= TEST 3: INCREMENT ========" << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		std::cout << "\n======== TEST 4: DECREMENT ========" << std::endl;
		bob.decrementGrade();
		std::cout << bob << std::endl;

		std::cout << "\n======= TEST 5: GRADE TOO HIGH =======" << std::endl;
		try {
			alice.incrementGrade();
		}
		catch (std::exception &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}

		std::cout << "\n======= TEST 6: GRADE TOO LOW ========" << std::endl;
		try {
			john.decrementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n======== TEST 7: INVALID CONSTRUCTORS =======" << std::endl;
	try {
		Bureaucrat bad("BadHigh", 0);
	} catch (std::exception &e) {
		std::cout << "Grade 0: " << e.what() << std::endl;
	}
	try {
		Bureaucrat bad("BadLow", 151);
	} catch (std::exception &e) {
		std::cout << "Grade 151: " << e.what() << std::endl;
	}

	std::cout << "\n======== ALL TESTS FINISHED =======" << std::endl;

	return (0);
}
