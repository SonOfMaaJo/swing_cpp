/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:59:35 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/09 20:05:52 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Default Brain's constructor called" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "Default Brain's destructor callled" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain's copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain&	Brain::operator=(const Brain& other) {
	if (this != &other)
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];

	return (*this);
}

void	Brain::setIdeas(int i, std::string ideas) {
	if (i < 0 || i >= 100)
		return ;
	_ideas[i] = ideas;
}

std::string	Brain::getIdeas(int i) const {
	if (i < 0 || i >= 100)
		return ("");
	return (_ideas[i]);
}
