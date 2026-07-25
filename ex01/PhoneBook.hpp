/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 14:07:32 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/07/25 15:25:11 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PhoneBook_H__
#define __PhoneBook_H__
#include "Contact.hpp"

class PhoneBook {
	public:
		void	add(void);
		void	search(void);
		PhoneBook(void);
		~PhoneBook(void);
	private:
		int		contact_number;
		Contact contacts[8];
};

#endif
