/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:05:55 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/02 14:48:56 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void) {
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer " << std::endl;
	std::cout << "b is " << b.toInt() << " as integer " << std::endl;
	std::cout << "c is " << c.toInt() << " as integer " << std::endl;
	std::cout << "d is " << d.toInt() << " as integer " << std::endl;

	return (0);
}
