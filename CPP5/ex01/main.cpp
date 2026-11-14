/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:56:32 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/14 18:25:09 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
	std::cout << "\n======= TEST 1 : CREATION ==========\n";
	try {
		Bureaucrat bob("Bob", 1);
		Bureaucrat alice("Alice", 75);
		Form	form("Contract", 50, 25);

		std::cout << bob << std::endl;
		std::cout << alice << std::endl;
		std::cout << form << std::endl;
		std::cout << form.getName() << std::endl;
		std::cout << form.getIsSign() << std::endl;
		std::cout << form.getGradForSign() << std::endl;
		std::cout << form.getGradForExc() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n======== TEST 2 : SIGN CORRECT =========\n";
	try
    {
        	Bureaucrat bob("Bob", 1);
        	Form form("Form A", 50, 25);

        	bob.signForm(form);
        	std::cout << form << std::endl;
    }
    catch (const std::exception &e)
    {
        	std::cout << e.what() << std::endl;
    }

	std::cout << "\n======= TEST 3 : SIGN INCORRECT ===========\n";
	try
    {
        	Bureaucrat bob("Bob", 100);
        	Form form("Form A", 50, 25);

        	bob.signForm(form);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

	std::cout << "\n========= TEST 4 : SIGN DIRECT ============\n";
	try
    {
        	Bureaucrat bob("Bob", 1);
        	Form form("Form A", 50, 25);

        	form.beSigned(bob);
        	std::cout << form << std::endl;
    }
    catch (const std::exception &e)
    {
        	std::cout << e.what() << std::endl;
    }

	std::cout << "\n======== TEST 5 : DOUBLE SIGN ==========\n";
	try
    {
        	Bureaucrat bob("Bob", 1);
        	Form form("Form A", 50, 25);

        	bob.signForm(form);
        	bob.signForm(form);
    }
    catch (const std::exception &e)
    {
        	std::cout << e.what() << std::endl;
    }

	std::cout << "\n======== TEST 6 : VERIFIE STATUT APRES ECHEC =========\n";
	Bureaucrat bob("Bob", 100);
    Form form("Form A", 50, 25);

    bob.signForm(form);
    std::cout << form.getIsSign() << std::endl;
	return (0);
}
