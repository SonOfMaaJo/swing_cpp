/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:13:35 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/09 17:51:36 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_CAT_H__
#define	_CAT_H__

#include "Animal.hpp"

class	Cat : public Animal {
	public :
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);
		Cat& operator=(const Cat& other);
		void	makeSound(void) const;
};

#endif
