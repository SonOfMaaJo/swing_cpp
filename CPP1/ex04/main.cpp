/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 19:09:48 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/17 16:51:27 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void	replace(std::string& content, std::string s1, std::string s2) {
	size_t	pos = content.find(s1);
	std::string	sub1;
	std::string	sub2;

	while (pos != std::string::npos) {
		sub1 = content.substr(0, pos);
		sub2 = content.substr(pos + s1.length());
		content = sub1 + s2 + sub2;
		pos = content.find(s1, pos + s2.length());
	}
}

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << \
			" <filename> <old_string> <new_string>" << std::endl;
		return (1);
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if (s1.empty()) {
		std::cerr << "Error: <old_string> must not be empty." << std::endl;
		return (1);
	}

	std::ifstream	file1(filename.c_str());
	if (!file1.is_open()) {
		std::cerr << "Error: fail to read '" << filename << "' file." << \
			std::endl;
		return (1);
	}

	std::stringstream	buffer;
	buffer << file1.rdbuf();
	file1.close();

	std::string	content = buffer.str();
	replace(content, s1, s2);

	std::ofstream	file2((filename + ".replace").c_str());
	if (!file2.is_open()) {
		std::cerr << "Error: fail to create '" << filename << \
			".replace' file." << std::endl;
		return (1);
	}
	file2 << content;
	file2.close();
	return (0);
}
