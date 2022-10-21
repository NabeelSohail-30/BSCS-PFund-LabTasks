#include <iostream>
#include <conio.h>

using namespace std;

int userId, depositAmount, withdrawAmount;

void MainMenu();
void Login();
void Deposit();
void Withdraw();

void main()
{
	//Simple Bank Transaction Application

	Login();

	getchar();
	getchar();
}

void MainMenu()
{
	char op;
	int choice = 0;

	system("CLS");

	cout << "Main Menu" << endl;
	cout << "1. Deposit Money" << endl;
	cout << "2. Withdraw Amount" << endl;
	cout << "3. Login as Different User" << endl;

	while (choice <= 0 || choice > 3)
	{
		cout << endl << "Select your choice (1,2,3): " << endl;
		cin >> choice;
	}

	switch (choice)
	{
	case 1:
		Deposit();
		break;

	case 2:
		Withdraw();
		break;

	case 3:
		Login();
		break;
	}

	cout << endl << "do you want to continue (Y,y/N,n) :";
	cin >> op;

	if (op == 'Y' || op == 'y') {
		MainMenu();
	}
}

void Login()
{
	//Login
	userId = 0;

	system("CLS");

	cout << "Enter your Login Id: ";
	cin >> userId;

	MainMenu();
}

void Deposit()
{
	//Deposit

	depositAmount = 0;

	system("cls");

	cout << "Enter Amount you want to deposit: ";
	cin >> depositAmount;
	cout << "User Id " << userId << " Deposited Amount: " << depositAmount << " PKR";
	cout << endl << "Thanks";
}

void Withdraw()
{
	//Withdraw Amount
	withdrawAmount = 0;

	system("cls");

	cout << "Enter Amount you want to Withdraw: ";
	cin >> withdrawAmount;
	cout << "User Id " << userId << " Withdraw Amount: " << withdrawAmount << " PKR";
	cout << endl << "Thanks";
}