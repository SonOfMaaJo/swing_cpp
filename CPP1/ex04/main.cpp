/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 19:09:48 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/28 20:07:58 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replace(std::string& lign, std::string s1, std::string s2) {
	size_t	pos = lign.find(s1);
	std::string	sub1;
	std::string	sub2;

	while (pos != std::string::npos) {
		sub1 = lign.substr(0, pos);
		sub2 = lign.substr(pos + s1.length());
		lign = sub1 + s2 + sub2;
		pos = lign.find(s1, pos + s2.length());
	}
}

int	main(int argc, char **argv) {
	std::string	s1;
	std::string	s2;

	if (argc != 4) {
		std::cout << "Usage: ./out <filename> <old_string> <new_string>";
		return (0);
	}

	std::ifstream	file1(argv[1]);
	if (file1.is_open()) {
		std::string	lign;

		s1 = argv[2];
		s2 = argv[3];
		std::ofstream	file2((std::string(argv[1]) + ".repalce").c_str());
		if (file2.is_open()) {
			while (std::getline(file1, lign))
			{
				replace(lign, s1, s2);
				file2 << lign << std::endl;
			}
			file2.close();
		} else {
			std::cerr << "fail to create '" << argv[1] << ".replace' file." << \
				std::endl;
		}
		file1.close();
	} else {
		std::cerr << "fail to read '" << argv[1] << "' file." <<  std::endl;
	}
	return (0);
}
