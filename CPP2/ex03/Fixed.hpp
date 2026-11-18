/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:49:36 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/02 17:50:02 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed {
	public :
		Fixed( void );
		Fixed( const int intg );
		Fixed( const float floatr );
		Fixed( const Fixed& other );
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		Fixed&	operator=(const Fixed& other);
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator>(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
		static Fixed&		min(Fixed& one, Fixed& other);
		static Fixed&		max(Fixed& one, Fixed& other);
		static const Fixed&	min(const Fixed& one, const Fixed& other);
		static const Fixed&	max(const Fixed& one, const Fixed& other);

	private :
		int					_value;
		static const int	_fract_bits;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fix);

#endif
