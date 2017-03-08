#include <iostream>
#include "Bank.h"
using namespace std;

Bank bank = Bank("Awesome Bank");

void DisplayMenu();
void AddAccountMenu();
void TransactMenu();
void DisplayAccountsMenu();
void DisplayLog();

int main()
{
	DisplayMenu();

	system("PAUSE");
	return 0;
}

void DisplayMenu()
{
	int choice = 0;
	do
	{
		system("cls");
		cout << "Welcome to " + bank.getName() + "." << endl;
		cout << "1) Add Account" << endl;
		cout << "2) Transact" << endl;
		cout << "3) Display Accounts" << endl;
		cout << "4) Display Log " << endl;
		cout << "What would you like to do?" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			AddAccountMenu();
			break;
		case 2:
			TransactMenu();
			break;
		case 3:
			DisplayAccountsMenu();
			break;
		case 4:
			DisplayLog();
			break;
		default:
			break;
		}
	} while (choice != 10);
}

void AddAccountMenu()
{
	system("cls");
	cout << "Customer First Name: ";
	string firstName;
	cin >> firstName;

	cout << "Customer Last Name: ";
	string lastName;
	cin >> lastName;

	cout << "Account Number: ";
	int accountNumber;
	cin >> accountNumber;

	Customer customer = Customer(firstName, lastName);
	Account newAccount = Account(customer, accountNumber);
	bank.CreateAccount(newAccount);
}

void TransactMenu()
{
	system("cls");

	//takes the INDEX/POSITION of the account number, not the actual account number itself 
	cout << "Which account do you want to access?" << endl;
	cout << bank.ListAccounts() << endl;
	int chosenAccount;
	cin >> chosenAccount;

	system("cls");
	cout << "1) Deposit" << endl;
	cout << "2) Withdraw" << endl;
	int transactionType;
	cin >> transactionType;

	system("cls");
	cout << "How many pennies?" << endl;
	int pennies;
	cin >> pennies;

	switch (transactionType)
	{
		case 1:
			bank.Deposit(chosenAccount, pennies);
			break;
		case 2:
			bank.Withdraw(chosenAccount, pennies);
			break;
		default:
			break;
	}

}

void DisplayAccountsMenu()
{
	system("cls");
	cout << bank.ShowAccounts();
	system("PAUSE");
}

void DisplayLog()
{
	system("cls");
	//takes the INDEX/POSITION of the account number, not the actual account number itself 
	cout << "Which account do you want to access?" << endl;
	cout << bank.ListAccounts() << endl;
	int chosenAccount;
	cin >> chosenAccount;

	system("cls");
	cout << "LOGS" << endl;
	cout << bank.DisplayLogInfo(chosenAccount) << endl;
	system("pause");
}
