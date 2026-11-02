/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:38:45 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/02 19:45:25 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <string>

class Contact {
	public:
		std::string	getName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);
		void		setName(std::string name_);
		void		setLastName(std::string last_name_);
		void		setNickName(std::string nick_name_);
		void		setPhoneNumber(std::string phone_number_);
		void		setDarkestSecret(std::string darkest_secret_);
		Contact(void);
		Contact(std::string name_p, std::string last_name_p,
				std::string nick_name_p, std::string phone_number_p,
				std::string darkest_secret_p);
		~Contact(void);

	private:
		std::string	name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif
