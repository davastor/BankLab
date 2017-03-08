#pragma once
#include "Customer.h"
#include <string>

class Account
{
private: 
	int _accountNumber;
	int _balanceInPennies = 0;
	Customer _accountOwner;

public:
	Account(Customer customer, int accountNumber);
	~Account();

	int getAccountNumber();
	void Deposit(int numberOfPennies);
	void Withdraw(int numberOfPennies);
	int getBalance();
};

