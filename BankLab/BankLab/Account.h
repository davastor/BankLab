#pragma once
#include "Customer.h"
#include <vector>
#include <string>

class Account
{
private: 
	int _accountNumber;
	int _balanceInPennies = 0;
	Customer _accountOwner;
	vector <string> _log;

public:
	Account(Customer customer, int accountNumber);
	~Account();

	string getLog();
	string getCustomerName();
	int getAccountNumber();
	void Deposit(int numberOfPennies);
	void Withdraw(int numberOfPennies);
	int getBalance();
};

