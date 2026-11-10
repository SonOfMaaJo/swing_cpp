/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:13:35 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/10 19:33:28 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_CAT_H__
#define	_CAT_H__

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal {
	public :
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);
		Cat& operator=(const Cat& other);
		void	makeSound(void) const;
	private :
		Brain*	_brain;
};

#endif
