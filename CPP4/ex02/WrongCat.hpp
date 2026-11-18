/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:13:35 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/09 18:46:36 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
#define	WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	public :
		WrongCat(void);
		WrongCat(const WrongCat& other);
		~WrongCat(void);
		WrongCat& operator=(const WrongCat& other);
		void	makeSound(void) const;
};

#endif
