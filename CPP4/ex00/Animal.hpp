/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:49:23 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/09 17:54:28 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_H__
#define _ANIMAL_H__

#include <string>

class	Animal {
	public :
		std::string	getType(void) const;
		void		setType(std::string type);
		Animal(void);
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		virtual ~Animal(void);
		virtual void		makeSound(void) const;

	protected :
		std::string	_type;
};

#endif
