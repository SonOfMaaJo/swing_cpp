/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:59:18 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/23 16:33:42 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "Account.hpp"

Account::Account(void) {
	_nbAccounts = 0;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
}

int	Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void) {
	char			buffer[8];
	std::string		log = ".log";
	std::time_t		timestamp = std::time(nullptr);
	std::tm*		local_time = std::localtime(&timestamp);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local_time);

	std::ifstream	file((buffer + log).c_str(), std::ios::app);
	if (file.is_open()) {
		file << "[" << buffer << "] ";
		file.close();
	} else {
		std::cerr << "Something went wrong !" << std::endl;
	}
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
}
