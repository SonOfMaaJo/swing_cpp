/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 14:30:21 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/02 19:52:24 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string name_p, std::string last_name_p,
		std::string nick_name_p, std::string phone_number_p,
		std::string darkest_secret_p)
{
	name = name_p;
	last_name = last_name_p;
	nick_name = nick_name_p;
	phone_number = phone_number_p;
	darkest_secret = darkest_secret_p;
}

void	Contact::setName(std::string name_) {
	name = name_;
}

void	Contact::setLastName(std::string last_name_) {
	last_name = last_name_;
}

void	Contact::setNickName(std::string nick_name_) {
	nick_name = nick_name_;
}

void	Contact::setPhoneNumber(std::string phone_number_) {
	phone_number = phone_number_;
}

void	Contact::setDarkestSecret(std::string darkest_secret_) {
	darkest_secret = darkest_secret_;
}

std::string	Contact::getName(void) {
	return (name);
}

std::string	Contact::getLastName(void) {
	return (last_name);
}

std::string	Contact::getNickName(void) {
	return (nick_name);
}

std::string	Contact::getPhoneNumber(void) {
	return (phone_number);
}

std::string	Contact::getDarkestSecret(void) {
	return (darkest_secret);
}

Contact::~Contact(void){}
