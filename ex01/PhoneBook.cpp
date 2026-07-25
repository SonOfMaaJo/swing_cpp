/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 14:39:15 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/07/25 16:01:29 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include "iostream"
#include "Contact.hpp"
#include <string>
#include <iomanip>

std::string	well_printable(std::string str, long unsigned int width) {
	std::string new_str = str;
	if (new_str.length() <= width)
		return (new_str);
	else {
		new_str.replace(7, 3, "...");
		return (new_str.substr(0, width));
	}
}

PhoneBook::PhoneBook(void) {
	contact_number = 0;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "See you soon !!!" << std::endl;
}

void	display_infos(int index, Contact contact, long unsigned int width) {
	std::cout << std::right << std::setw(5) << index << "|" \
		<< std::right << std::setw(width) << well_printable(contact.name,
				width) << "|" << std::right << std::setw(width) << \
		well_printable(contact.last_name, width) << "|" << std::right << \
		std::setw(width) << well_printable(contact.nick_name, width) << \
		std::endl;
}

void	display_contact(Contact contact) {
	std::cout << "first name : " << contact.name << std::endl;
	std::cout << "last name : " << contact.last_name << std::endl;
	std::cout << "nickname : " << contact.nick_name << std::endl;
	std::cout << "phone number : " << contact.phone_number << std::endl;
	std::cout << "darkest secret : " << contact.darkest_secret << std::endl;
}

void	PhoneBook::add(void) {
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
		contacts[contact_number] = Contact(name, last_name, nick_name,
				phone_number, darkest_secret);
		contact_number = (contact_number + 1) % 8;
	}
	else {
		std::cin.ignore();
		std::cout << "Something wrong append." << std::endl;
	}
}

void	PhoneBook::search(void) {
	int	i;
	int	index;

	if (contact_number == 0) {
		std::cout << "Your phonebook is empty, add contact first.\n";
		return ;
	}
	std::cout << "index" << "|" \
		<< std::right << std::setw(10) << "first name" << "|" << std::right \
		<< std::setw(10) << "last name" << "|" << std::right \
		<< std::setw(10) << "nickmane" << std::endl;
	i = 0;
	while (i < contact_number)
	{
		i++;
		display_infos(i , contacts[i - 1], 10);
	}
	std::cout << "\n\n" << "Choose the index of entry to display : ";
	std::cin >> index;
	if (index <= 0 && index > contact_number)
		std::cout << "Invalid choice, please try again." << std::endl;
	else {
		display_contact(contacts[index - 1]);
	}
	std::cin.ignore();
}
