/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 09:16:15 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 06:30:35 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::getNbAccounts(void) { return _nbAccounts; }
int Account::getTotalAmount(void) { return _totalAmount; }
int Account::getNbDeposits(void) { return _totalNbDeposits; }
int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }
int Account::checkAmount(void) const { return _amount; }

Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts),
      _amount(initial_deposit),
      _nbDeposits(0),
      _nbWithdrawals(0) {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created"
            << std::endl;
  _nbAccounts++;
  _totalAmount += initial_deposit;
}

Account::~Account() {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed"
            << std::endl;
  _nbAccounts--;
}

void Account::_displayTimestamp(void) {
  std::time_t t = std::time(nullptr);
  std::cout << "[" << std::put_time(std::localtime(&t), "%Y%m%d_%H%M%S")
            << "] ";
}


void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount
            << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
            << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  int tmp;

  tmp = _amount;
  if (withdrawal > _amount) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << tmp
              << ";withdrawal:refused" << std::endl;
    return (false);
  }
  _totalNbWithdrawals++;
  _nbWithdrawals++;
  _amount -= withdrawal;
  _totalAmount -= withdrawal;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";p_amount:" << tmp
            << ";withdrawal:" << withdrawal << ";amount:" << _amount
            << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
  return (true);
}

void Account::makeDeposit(int deposit) {
  int tmp;

  tmp = _amount;
  _displayTimestamp();
  _amount += deposit;
  _totalNbDeposits++;
  _nbDeposits++;
  _totalAmount += deposit;

  std::cout << "index:" << _accountIndex << ";p_amount:" << tmp
            << ";deposit:" << deposit << ";amount:" << _amount
            << ";nb_deposits:" << _nbDeposits << std::endl;
  return;
}
