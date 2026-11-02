/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:01:31 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/02 14:40:25 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intg) : _value(intg << _fract_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatr) : _value(roundf(floatr * (1 <<
				_fract_bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : _value(other.getRawBits())  {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator" << std::endl;

	if (this != &other) {
		this->_value = other.getRawBits();
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fix)  {
	return os << fix.toFloat();
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member fuction called" << std::endl;
	_value = raw;
}

float	Fixed::toFloat( void ) const {
	return ((float)_value / (1 << _fract_bits));
}

int	Fixed::toInt(void) const {
	return (_value >> _fract_bits);
}



