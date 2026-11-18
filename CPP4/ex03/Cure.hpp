/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:05:00 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/11 15:10:53 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__CURE_H__
#define	__CURE_H__

#include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure(void);
		~Cure(void);
		Cure(const Cure& other);
		Cure&	operator=(const Cure& other);
		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
