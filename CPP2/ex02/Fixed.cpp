/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:01:31 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/02 17:46:18 by vnaoussi         ###   ########.fr       */
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
	os << fix.toFloat();

	return (os);
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
	return Fixed(this->toFloat() * other.toFloat());
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
	if (other.getRawBits() == 0) {
		std::cout << "Error: Division by zero" << std::endl;
		return (Fixed());
	}

	bool	is_negative = false;
	int		num = this->_value;
	int		dem = other.getRawBits();
	if ((num < 0 && dem > 0) || (num > 0 && dem < 0))
		is_negative = true;
	if (num < 0)
		num = -num;
	if (dem < 0)
		dem = -dem;

	int result = ((num << _fract_bits) + dem / 2) / dem;
	if (is_negative)
		result = -result;
	return (Fixed(result));
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
