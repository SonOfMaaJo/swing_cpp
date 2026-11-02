/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:49:36 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/02 14:36:53 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_H__
#define _FIXED_H__

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
		friend	std::ostream& operator<<(std::ostream& os, const Fixed& fix);

	private :
		int					_value;
		static const int	_fract_bits;
};

#endif
