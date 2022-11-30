/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:57:29 by mdelforg          #+#    #+#             */
/*   Updated: 2022/09/29 16:50:47 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

/*					Static var					*/
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;



/*					Constructor					*/
Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	if (initial_deposit > 0)
		Account::_totalAmount += initial_deposit;
	else
		this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std:: cout << "amount:" << this->_amount << ";created";
	std::cout << std::endl;
	return ;
}

Account::Account(void)
{

}


/*					Destructor						*/
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std:: cout << "amount:" << this->_amount << ";closed";
	std::cout << std::endl;
	return ;
}



/*					Static getters					*/
int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
	return ;
}



/*					Getters							*/
int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return ;
}



/*					Setters							*/
void	Account::makeDeposit(int deposit)
{
	if (deposit <= 0)
		return ;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";

	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;

	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";

	if (this->_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;

	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return (true);
}



/*					Static private					*/
void	Account::_displayTimestamp(void)
{
	std::time_t	rawTime;
	struct tm	*timeInfo;
	char		buffer[16];

	time(&rawTime);
	timeInfo = localtime(&rawTime);
	strftime(buffer, 16, "%Y%m%d_%H%M%S", timeInfo);
	std::cout << "["<< buffer << "] ";
	return ;
}
