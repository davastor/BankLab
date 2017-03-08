#pragma once
#include <vector>
#include "Account.h"
using namespace std;

class Bank
{
private:
	string _name;
	vector<Account> _accounts;

public:
	Bank(string name);
	~Bank();

	void CreateAccount(Account newAccount);
	string ShowAccounts();
	string getName();
	string ListAccounts();
	void Deposit(int accountNumber, int amount);
	void Withdraw(int accountNumber, int amount);
};

