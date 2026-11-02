/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:01:31 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/29 17:36:43 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed(void) : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)  {
	std::cout << "Copy constructor called" << std::endl;
	value = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator" << std::endl;

	if (this != &other) {
		this->value = other.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member fuction called" << std::endl;
	value = raw;
}



