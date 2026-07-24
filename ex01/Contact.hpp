/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:38:45 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/07/24 15:28:28 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <string>

class Contact {
	public:
		std::string name;
		std::string last_name;
		std::string	nick_name;
		int			phone_number;
		std::string	darkest_secret;
		Contact(void);
		Contact(std::string name_p, std::string last_name_p,
				std::string nick_name_p, int phone_number_p,
				std::string darkest_secret_p);
		~Contact(void);
};

#endif
