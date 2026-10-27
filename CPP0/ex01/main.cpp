/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 15:03:45 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/07/25 15:59:09 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <string>

int main(void) {
	PhoneBook	phonebook;
	std::string	choice;

	std::cout << "Welcome to the phonebook software." << \
		"This is an amazing software to store and manage up to 8 contacts.\n" \
		 << "You can choice between 3 actions : \n" << \
		"- ADD: to save a new contact.\n" << \
		"- SEARCH: to display a specific contact\n" << \
		"- EXIT: to quit the program and lost all the contacts forever\n";
	while (1) {
		std::cout << "\n\nWhat do you what to do now : ADD, SEARCH or EXIT.\n";
		if (!std::getline(std::cin, choice))
		{
			std::cout << "Something went wrong." << std::endl;
			break;
		}
		if (choice == "ADD")
		{
			if (phonebook.add() == 1)
			{
				std::cout << "Something went wrong." << std::endl;
				break;
			}
		}
		else if (choice == "SEARCH")
			phonebook.search();
		else if (choice == "EXIT")
			break;
		else
			std::cout << "Invalid choice.";
	}
	return (0);
}
