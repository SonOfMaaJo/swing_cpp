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
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <ios>
#include "PhoneBook.hpp"

std::string	well_printable(std::string str, long unsigned int width) {
	std::string new_str = str;
	if (new_str.length() <= width)
		return (new_str);
	else {
		new_str.replace(7, 3, "...");
		return (new_str.substr(0, width));
	}
}

bool	not_only_space(const std::string str)
{
	size_t	i;

	for (i = 0; str[i] != '\0'; ++i) {
		if (!std::isspace(static_cast<unsigned char>(str[i])))
			return (false);
	}
	return (true);
}

bool	is_contact_number(const std::string contact)
{
	size_t	i;

	if (not_only_space(contact))
		return (false);

	for (i = 0; contact[i] != '\0'; ++i)
		if (!std::isdigit(static_cast<unsigned char>(contact[i])) \
				&& !std::isspace(static_cast<unsigned char>(contact[i])))
			return (false);
	return (true);
}
std::string get_not_empty_string(void)
{
	std::string	str;

	str = "";
	while (true) {
		if (!std::getline(std::cin, str))
			break;
		if (str.length() == 0 || not_only_space(str))
		{
			std::cout << "Field couldn't be empty, try again !!!" << std::endl;
			continue;
		}
		break;
	}
	return (str);
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

int	PhoneBook::add(void) {
	std::string name;
	std::string last_name;
	std::string nick_name;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Enter the first name:" << std::endl;
	name = get_not_empty_string();
	if (name.empty())
		return (1);
	std::cout << "Enter the last name:" << std::endl;
	last_name = get_not_empty_string();
	if (last_name.empty())
		return (1);
	std::cout << "Enter the nickname:" << std::endl;
	nick_name = get_not_empty_string();
	if (nick_name.empty())
		return (1);
	std::cout << "Enter the phone number:" << std::endl;
	phone_number = get_not_empty_string();
	while (!is_contact_number(phone_number))
	{
		std::cout << "Invalid phone number, try again !!!" << std::endl;
		phone_number = get_not_empty_string();
	}
	std::cout << "Enter the darkest secret:" << std::endl;
	darkest_secret = get_not_empty_string();
	if (darkest_secret.empty())
		return (1);
	contacts[contact_number] = Contact(name, last_name, nick_name,
			phone_number, darkest_secret);
	contact_number = (contact_number + 1) % 8;
	return (0);
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
	if (index <= 0 || index > contact_number)
		std::cout << "Invalid choice, please try again." << std::endl;
	else {
		display_contact(contacts[index - 1]);
	}
	std::cin.ignore();
}
