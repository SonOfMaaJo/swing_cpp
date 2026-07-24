/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 14:30:21 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/07/24 14:40:09 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	name = "";
	last_name = "";
	nick_name = "";
	phone_number = 0;
	darkest_secret = "";
}

Contact::Contact(std::string name_p, std::string last_name_p,
		std::string nick_name_p, int phone_number_p,
		std::string darkest_secret_p)
{
	name = name_p;
	last_name = last_name_p;
	nick_name = nick_name_p;
	phone_number = phone_number_p;
	darkest_secret = darkest_secret_p;
}

Contact::~Contact(void){

}
