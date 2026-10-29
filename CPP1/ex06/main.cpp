/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 23:57:32 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/29 00:38:46 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl        harl;
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int         index = 0;

    if (argc != 2)
        return (0);

    while(index < 4 && levels[index] != std::string(argv[1]))
        index++;

    switch (index) {
        case 4:
            std::cout << "[ Probably complaining about" << \
            " insignificant problemns ]\n";
            break;
        default:
            for(int i = index; i < 4; i++) {
                std::cout << "[ " << levels[i] << " ]\n";
                harl.complain(levels[i]);
                std::cout << "\n";
            }
            break;
    }
    return (0);

}
