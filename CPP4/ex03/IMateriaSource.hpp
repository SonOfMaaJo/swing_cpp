/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:47:21 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/13 14:27:30 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>

class	AMateria;

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}
		virtual	void		learnMateria(AMateria*) = 0;
		virtual	AMateria*	createMateria(std::string const& type) = 0;
};

#endif
