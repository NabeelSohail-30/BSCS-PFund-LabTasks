#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct BankCostumer
{
	string AccountNumber;
	string Name;
	double Balance;
};

void DisplayAll(BankCostumer c[]);

void main()
{
	BankCostumer customer[200];

	for (int i = 0; i < 200; i++)
	{
		customer[i].AccountNumber = "0922-463226";
		customer[i].Name = "Customer";
		customer[i].Balance = 1000;
	}

	DisplayAll(customer);

	system("pause>0");
}

void DisplayAll(BankCostumer c[])
{
	for (int i = 0; i < 200; i++) {
		cout << i+1 <<  " - Account Number: " << c[i].AccountNumber << " - Name: " << c[i].Name << " - Balance: " << c[i].Balance << endl;
	}
}