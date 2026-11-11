/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:53:23 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/11 17:02:26 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource& other);
		MateriaSource&	operator=(const MateriaSource& other);
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const& type);

	private:
		AMateria*	_knowledge[4];
		int			nbknow;
};

#endif
