/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 14:39:15 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/07/24 15:27:30 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include "iostream"
#include "Contact.hpp"

PhoneBook::add(void) {
	std::string name;
	std::string last_name;
	std::string nick_name;
	int			phone_number;
	std::string	darkest_secret;

	std::cout << "Enter the first name:" << std::endl;
	std::getline(std::cin, name);
	std::cout << "Enter the last name:" << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "Enter the nickname:" << std::endl;
	std::getline(std::cin, nick_name);
	std::cout << "Enter the phone number:" << std::endl;
	std::cin >> phone_number;
	if (phone_number != 0) {
		std::cin.ignore();
		std::cout << "Enter the darkest secret:" << std::endl;
		std::getline(std::cin, darkest_secret);
		contact[contact_number] = Contact(name, last_name, nick_name,
				phone_number, darkest_secret);
		contact_number = (contact_number + 1) % 8;
	}
	else {
		std::cout << "Something wrong append." << std::endl;
	}
}
