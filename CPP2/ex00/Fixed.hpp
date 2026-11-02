/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:49:36 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/29 17:01:14 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_H__
#define _FIXED_H__

class	Fixed {
	public :
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed(void);
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
	private :
		int					value;
		static const int	fract_bits;

};

#endif
