/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:49:36 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/18 16:31:56 by vnaoussi         ###   ########.fr       */
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
		Fixed& operator=(const Fixed& other);
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private :
		int					_value;
		static const int	_fract_bits;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fix);

#endif
