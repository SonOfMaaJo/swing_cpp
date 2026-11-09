/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:52:23 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/09 20:05:43 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <string>

class	Brain {
	public :
		Brain(void);
		~Brain(void);
		Brain(const Brain& other);
		Brain&	operator=(const Brain& other);
		void		setIdeas(int i, std::string ideas);
		std::string	getIdeas(int i) const ;
	private :
		std::string	_ideas[100];
};

#endif
