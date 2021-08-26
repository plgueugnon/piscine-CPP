#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

	Account::_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts; // attribut non membre => acces avec nom class et non this
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex\
	<< ";amount:" << this->_amount\
	<< ";created" << std::endl;
	return ;
}

// Account::Account(void) { // surcharge constructeur => est passe si pas de param => a priori sert a rien ?

// 	return ;
// }

// un point interessant ici => constructor / destructor => fonctionnement LIFO
// ici on commence par l'index 7 automatiquement
Account::~Account(void) {

	Account::_displayTimestamp();
	Account::_nbAccounts--; // a verif mais a priori ne sert a rien

	std::cout << "index:" << this->_accountIndex\
	<< ";amount:" << this->_amount\
	<< ";closed" << std::endl;
	return ;
}

/* ACCES AUX FONCTIONS NON MEMBRES DE L INSTANCE */


int	Account::getNbAccounts(void) { // ne sert a rien

	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) { // ne sert a rien

	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void) { // ne sert a rien

	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) { // ne sert a rien

	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts\
	<< ";total:" << Account::_totalAmount\
	<< ";deposits:" << Account::_totalNbDeposits\
	<< ";withdrawals:" << Account::_totalNbWithdrawals\
	<< std::endl;
	return ;
}

void	Account::_displayTimestamp(void) {

	std::cout << "[19920104_091532] ";
	return ;
}

/* ACCES AUX FONCTIONS MEMBRES DE L INSTANCE */

void	Account::makeDeposit(int deposit) {

	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex\
	<< ";p_amount:" << this->_amount\
	<< ";deposit:" << deposit;

	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits += _nbDeposits;
	Account::_totalAmount += deposit;
	std::cout << ";amount" << this->_amount\
	<< ";nb_deposits:" << this->_nbDeposits\
	<< std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal) {

	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex\
	<< ";p_amount:" << this->_amount;

	if (this->_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals += _nbWithdrawals;
		std::cout << ";withdrawal:" << withdrawal\
		<< ";amount:" << this->_amount\
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (1);
	}
}

int	Account::checkAmount(void) const { // ne sert a rien

	return (this->_amount);
}

void	Account::displayStatus(void) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex\
	<< ";amount:" << this->_amount\
	<< ";deposits:" << this->_nbDeposits\
	<< ";withdrawals:" << this->_nbWithdrawals\
	<< std::endl;
}

/* INIT DES ATTRIBUTS NON MEMBRES */

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
