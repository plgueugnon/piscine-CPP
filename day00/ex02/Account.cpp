#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) : _amount(initial_deposit) {

	return ;
}

Account::Account(void) { // surcharge constructeur => est passe si pas de param

	return ;
}

Account::~Account(void) {

	return ;
}

/* ACCES AUX FONCTIONS NON MEMBRES DE L INSTANCE */


int	Account::getNbAccounts(void) {

	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) {

	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void) {

	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {

	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {

	return ;
}

/* ACCES AUX FONCTIONS MEMBRES DE L INSTANCE */

void	Account::makeDeposit(int deposit) {

	this->_amount += deposit;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal) {

	if (this->_amount < withdrawal)
		return (0);
	else
	{
		return (this->_amount -= withdrawal); // verif si marche
		// return (1);
	}
}

int	Account::checkAmount(void) const {

	return (this->_amount);
}

void	Account::displayStatus(void) const {

	
}

/* INIT DES ATTRIBUTS NON MEMBRES */

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
