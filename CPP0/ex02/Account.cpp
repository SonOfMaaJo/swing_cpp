/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:59:18 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/27 16:57:43 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void) {
	char			buffer[32];
	std::string		log = ".log";
	std::time_t		timestamp = std::time(NULL);
	std::tm*		local_time = std::localtime(&timestamp);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local_time);

	std::ofstream	file((buffer + log).c_str(), std::ios::app);
	if (file.is_open()) {
			_displayTimestamp();
			_accountIndex = _nbAccounts++;
			_amount = 0;
			_nbDeposits = 0;
			_nbWithdrawals = 0;
			file << "index:" << _accountIndex << ";amount:" << _amount \
				<< ";created" << std::endl;
			file.close();
	} else {
		std::cerr << "Something went wrong !" << std::endl;
	}
}

Account::Account(int initial_deposit) {
	char			buffer[32];
	std::string		log = ".log";
	std::time_t		timestamp = std::time(NULL);
	std::tm*		local_time = std::localtime(&timestamp);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local_time);

	std::ofstream	file((buffer + log).c_str(), std::ios::app);
	if (file.is_open()) {
			_displayTimestamp();
			_accountIndex = _nbAccounts++;
			_amount = initial_deposit;
			_totalAmount += initial_deposit;
			_nbDeposits = 0;
			_nbWithdrawals = 0;
			file << "index:" << _accountIndex << ";amount:" << _amount << \
				";created" << std::endl;
			file.close();
	} else {
		std::cerr << "Something went wrong !" << std::endl;
	}
}

Account::~Account(void) {
	char			buffer[32];
	std::string		log = ".log";
	std::time_t		timestamp = std::time(NULL);
	std::tm*		local_time = std::localtime(&timestamp);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local_time);

	std::ofstream	file((buffer + log).c_str(), std::ios::app);
	if (file.is_open()) {
			_displayTimestamp();
			file << "index:" << _accountIndex << ";amount:" << _amount \
				<< ";closed" << std::endl;
			file.close();
	} else {
		std::cerr << "Something went wrong !" << std::endl;
	}
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
	char			buffer[32];
	std::string		log = ".log";
	std::time_t		timestamp = std::time(NULL);
	std::tm*		local_time = std::localtime(&timestamp);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local_time);

	std::ofstream	file((buffer + log).c_str(), std::ios::app);
	if (file.is_open()) {
		file << "[" << buffer << "] ";
		file.close();
	} else {
		std::cerr << "Something went wrong !" << std::endl;
	}
}

void	Account::displayAccountsInfos(void) {
	char			buffer[32];
	std::string		log = ".log";
	std::time_t		timestamp = std::time(NULL);
	std::tm*		local_time = std::localtime(&timestamp);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local_time);

	std::ofstream	file((buffer + log).c_str(), std::ios::app);
	if (file.is_open()) {
		_displayTimestamp();
		file << "accounts:" << _nbAccounts << ";total:" << _totalAmount << \
			";deposits:" << _totalNbDeposits  << ";withdrawals:" << \
				_totalNbWithdrawals << std::endl;
		file.close();
	} else {
		std::cerr << "Something went wrong !" << std::endl;
	}
}

void	Account::displayStatus(void) const {
	char			buffer[32];
	std::string		log = ".log";
	std::time_t		timestamp = std::time(NULL);
	std::tm*		local_time = std::localtime(&timestamp);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local_time);

	std::ofstream	file((buffer + log).c_str(), std::ios::app);
	if (file.is_open()) {
		_displayTimestamp();
		file << "index:" << _accountIndex << ";amount:" << _amount << \
			";deposits:" << _nbDeposits  << ";withdrawals:" << \
				_nbWithdrawals << std::endl;
		file.close();
	} else {
		std::cerr << "Something went wrong !" << std::endl;
	}
}

void	Account::makeDeposit(int deposit) {
	char			buffer[32];
	int				p_amount;
	std::string		log = ".log";
	std::time_t		timestamp = std::time(NULL);
	std::tm*		local_time = std::localtime(&timestamp);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local_time);

	std::ofstream	file((buffer + log).c_str(), std::ios::app);
	if (file.is_open()) {
		_displayTimestamp();
		p_amount = _amount;
		_amount += deposit;
		_totalAmount += deposit;
		++_nbDeposits;
		++_totalNbDeposits;
		file << "index:" << _accountIndex << ";p_amount:" << p_amount << \
			";deposit:" << deposit << ";amount:" << _amount << \
			";nb_deposits:" << _nbDeposits  << std::endl;
		file.close();
	} else {
		std::cerr << "Something went wrong !" << std::endl;
	}
}

int	Account::checkAmount(void) const {
	return (_amount);
}

bool	Account::makeWithdrawal(int withdrawal) {
	char			buffer[32];
	int				p_amount;
	std::string		log = ".log";
	std::time_t		timestamp = std::time(NULL);
	std::tm*		local_time = std::localtime(&timestamp);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local_time);

	std::ofstream	file((buffer + log).c_str(), std::ios::app);
	if (file.is_open()) {
		_displayTimestamp();
		p_amount = _amount;
		if (checkAmount() < withdrawal) {
			file << "index:" << _accountIndex << ";p_amount:" << p_amount << \
				";withdrawal:refused" << std::endl;
			return (false);
		}
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		++_nbWithdrawals;
		++_totalNbWithdrawals;
		file << "index:" << _accountIndex << ";p_amount:" << p_amount << \
			";withdrawal:" << withdrawal << ";amount:" << _amount << \
			";nb_withdrawals:" << _nbWithdrawals  << std::endl;
		file.close();
		return (true);
	} else {
		std::cerr << "Something went wrong !" << std::endl;
		return (false);
	}
}
