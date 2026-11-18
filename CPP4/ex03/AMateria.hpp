/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:04:51 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/13 14:18:18 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <string>

class ICharacter;

class AMateria {
	protected:
		std::string	_type;

	public:
		AMateria(void);
		AMateria(std::string const& type);
		AMateria(const AMateria& other);
		AMateria&	operator=(const AMateria& other);
		virtual	~AMateria(void);
		std::string	const& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
