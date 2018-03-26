/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 11:04:53 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/26 19:03:22 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.class.hpp"
#include <ctime>

Account::Account(int initial_deposit) {
    _accountIndex = this->_nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    return;
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    _totalAmount -= _amount;
    _nbAccounts--;
    return;
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
    // return Account::_nbDeposits;
    return 0;
}

int Account::getNbWithdrawals(void) {
    // return Account::_nbWithdrawals;
    return 0;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
   std::cout << "accounts:" << _nbAccounts <<";total:" << _totalAmount <<";deposits:" << _totalNbDeposits <<";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
    int tmp = Account::_amount;
    _totalAmount += deposit;
    _totalNbDeposits += 1;    
    Account::_amount += deposit;
    Account::_nbDeposits += 1;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << tmp << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;    
};

bool	Account::makeWithdrawal(int withdrawal) {
    int tmp = Account::_amount;    
    if (Account::_amount < withdrawal) {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << tmp << ";withdrawal:refused" << std::endl;
        return false;
    } else {
        _totalAmount -= withdrawal;
        _totalNbWithdrawals += 1;
        Account::_amount -= withdrawal;
        Account::_nbWithdrawals += 1;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << tmp << ";withdrawal:" << withdrawal << ";amount:" << Account::_amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
};

int		Account::checkAmount(void) const {
    return Account::_amount;
};

void	Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
};

void Account::_displayTimestamp(void) {
    time_t rawtime;
    char buffer[20];
    time( &rawtime );
    strftime(buffer, 20, "%Y%m%d_%H%d%S", localtime( &rawtime ));
    std::cout << "[" << buffer << "] ";
}

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;