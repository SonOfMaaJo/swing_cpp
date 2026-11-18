/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:49:23 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/10 19:39:43 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class	AAnimal {
	public :
		std::string	getType(void) const;
		void		setType(std::string type);
		AAnimal(void);
		AAnimal(const AAnimal& other);
		AAnimal&	operator=(const AAnimal& other);
		virtual ~AAnimal(void);
		virtual void		makeSound(void) const = 0;

	protected :
		std::string	_type;
};

#endif
