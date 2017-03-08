#include "Bank.h"



Bank::Bank(string name): _name(name)
{
}

Bank::~Bank()
{
}

void Bank::CreateAccount(Account newAccount)
{
	_accounts.push_back(newAccount);
}

string Bank::ShowAccounts()
{
	string output = "Accounts for " + _name + ".\n";
	for (auto account : _accounts)
	{
		output += to_string(account.getAccountNumber()) + "\n";
	}

	return output;
}

string Bank::getName()
{
	return _name;
}

string Bank::ListAccounts()
{
	string output;
	int index = 1;
	for (auto account : _accounts)
	{
		output += to_string(index) + ")" + to_string(account.getAccountNumber()) + "\n";
		index++;
	}

	return output;
}

void Bank::Deposit(int accountNumber, int amount)
{
	for (auto account : _accounts)
	{
		if (account.getAccountNumber() == accountNumber)
		{
			account.Deposit(amount);
			return;
		}
	}
}

void Bank::Withdraw(int accountNumber, int amount)
{
	for (auto account : _accounts)
	{
		if (account.getAccountNumber() == accountNumber)
		{
			account.Withdraw(amount);
			return;
		}
	}
}
