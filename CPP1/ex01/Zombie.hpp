/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:48:13 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/28 16:48:47 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H__
#define _ZOMBIE_H__
#include <string>

class Zombie {
public :
	void	announce(void);
	void	setName(std::string name);
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
private :
	std::string name;
};

#endif
