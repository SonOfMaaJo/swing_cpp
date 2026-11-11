/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:33:21 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/11 17:17:12 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character(std::string const& name);
		~Character(void);
		Character(const Character& other);
		Character&			operator=(const Character& other);
		std::string	const&	getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

	private:
		std::string const&	_name;
		AMateria*			_slot[4];
};

#endif
