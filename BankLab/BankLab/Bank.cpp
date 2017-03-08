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
		//444 - Jones, Bob:  balance
		output += to_string(account.getAccountNumber()) + " -- " + account.getCustomerName() + " -- " + to_string(account.getBalance()) + "\n"; 
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
		output += to_string(index) + ") " + to_string(account.getAccountNumber()) + "\n";
		index++;
	}

	return output;
}

string Bank::DisplayLogInfo(int chosenAccount)
{
	string output;
	int index = 1;
	for (auto account : _accounts)
	{
		if (index == chosenAccount)
			output += account.getLog();
		index++;
	}

	return output;
}

void Bank::Deposit(int chosenAccount, int amount)
{
	int index = 1;
	for (auto &account : _accounts)
	{
		if (index == chosenAccount)
		{
			account.Deposit(amount);
			return;
		}
		index++;
	}
}

void Bank::Withdraw(int chosenAccount, int amount)
{
	int index = 1;
	for (auto &account : _accounts)
	{
		if (index == chosenAccount)
		{
			account.Withdraw(amount);
			return;
		}
		index++;
	}
}
