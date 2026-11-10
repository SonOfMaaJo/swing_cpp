/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:04:51 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/10 20:29:03 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMETERIA_H__
#define __AMETERIA_H__

#include <string>
#include "ICharacter.hpp"

class AMateria {
	protected :
		std::string	const&	_type;

	public:
		AMateria(std::string const& type);
		virtual	~AMateria(void);
		std::string	const& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
