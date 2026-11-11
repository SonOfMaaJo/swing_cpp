/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:39:23 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/11 15:02:43 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"

class Ice: public AMateria {
	private:
		static	std::string const& _type;

	public:
		Ice(void);
		Ice(const Ice& other);
		Ice&	operator=(const Ice& other);
		~Ice(void);
		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
