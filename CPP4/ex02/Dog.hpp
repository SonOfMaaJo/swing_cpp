/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:11:24 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/10 19:36:42 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H__
#define _DOG_H__

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	public :
		Dog(void);
		Dog(const Dog& other);
		~Dog(void);
		Dog& operator=(const Dog& other);
		void	makeSound(void) const;
	private :
		Brain*	_brain;
};

#endif
