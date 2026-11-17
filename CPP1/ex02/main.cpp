/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:02:12 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/17 16:37:14 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "memory adress of the string : " << &str << std::endl;
	std::cout << "memory adress held by the pointer : " << stringPTR << std::endl;
	std::cout << "memory adress held by  the reference : " << &stringREF << std::endl;

	std::cout << "value of the string : " << str << std::endl;
	std::cout << "value pointed to  by the pointer : " << *stringPTR << std::endl;
	std::cout << "value pointed to by reference : " << stringREF << std::endl;

	return (0);
}
