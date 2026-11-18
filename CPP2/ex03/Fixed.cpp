/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:01:31 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/02 19:22:01 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(const int intg) : _value(intg << _fract_bits) {}

Fixed::Fixed(const float floatr) : _value(roundf(floatr * (1 <<
				_fract_bits))) {}

Fixed::~Fixed(void) {}

Fixed::Fixed(const Fixed& other) : _value(other.getRawBits())  {}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		this->_value = other.getRawBits();
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fix)  {
	os << fix.toFloat();

	return (os);
}

int	Fixed::getRawBits( void ) const {
	return (_value);
}

void	Fixed::setRawBits( int const raw ) {
	_value = raw;
}

float	Fixed::toFloat( void ) const {
	return ((float)_value / (1 << _fract_bits));
}

int	Fixed::toInt(void) const {
	return (_value >> _fract_bits);
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed	result;

	result.setRawBits(this->_value + other.getRawBits());
	return (result);
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed	result;

	result.setRawBits(this->_value - other.getRawBits());
	return (result);
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed	result;
	long	raw = static_cast<long>(this->_value) * other._value;

	result.setRawBits(static_cast<int>(raw >> _fract_bits));
	return (result);
}

Fixed&	Fixed::operator++() {
	this->_value++;

	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	result;

	result.setRawBits(this->_value++);
	return (result);
}

Fixed&	Fixed::operator--() {
	this->_value--;

	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	result;

	result.setRawBits(this->_value--);
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const {
	if (other._value == 0) {
		std::cout << "Error: Division by zero" << std::endl;
		return (Fixed());
	}

	Fixed	result;
	long	num = static_cast<long>(this->_value) << _fract_bits;

	result.setRawBits(static_cast<int>(num / other._value));
	return (result);
}

bool	Fixed::operator<(const Fixed& other) const {
	return (this->_value < other.getRawBits());
}

bool	Fixed::operator>(const Fixed& other)  const {
	return (this->_value > other.getRawBits());
}

bool	Fixed::operator<=(const Fixed& other) const  {
	return (this->_value <= other.getRawBits());
}

bool	Fixed::operator>=(const Fixed& other) const {
	return (this->_value >= other.getRawBits());
}

bool	Fixed::operator==(const Fixed& other) const {
	return (this->_value == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (this->_value != other.getRawBits());
}

Fixed&	Fixed::min(Fixed& one, Fixed& other) {
	if (one < other)
		return (one);
	return (other);
}

const Fixed&	Fixed::min(const Fixed& one, const Fixed& other) {
	if (one < other)
		return (one);
	return (other);
}

Fixed&	Fixed::max(Fixed& one, Fixed& other) {
	if (one > other)
		return (one);
	return (other);
}

const Fixed&	Fixed::max(const Fixed& one, const Fixed& other) {
	if (one > other)
		return (one);
	return (other);
}
