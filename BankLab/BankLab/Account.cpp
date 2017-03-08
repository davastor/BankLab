#include "Account.h"



Account::Account(Customer customer, int accountNumber) : _accountOwner(customer) , _accountNumber(accountNumber)
{
}

Account::~Account()
{
}

string Account::getLog()
{
	string output;
	int index = 0;
	for (auto log : _log)
	{
		output += to_string(index+1) + ") " + _log[index] + "\n";
		index++;
	}
	
	return output;
}

string Account::getCustomerName()
{
	string output = _accountOwner.getFullName();
	return output;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}

void Account::Deposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
	_log.push_back("Deposited " + to_string(numberOfPennies) + ".");
}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
	_log.push_back("Withdrew " + to_string(numberOfPennies) + ".");
}

int Account::getBalance()
{
	return _balanceInPennies;
}
