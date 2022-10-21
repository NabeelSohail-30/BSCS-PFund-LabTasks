#include <iostream>
#include <conio.h>

using namespace std;

void main()
{

	//program to check voter eligibility

	int voterAge;

	cout << "=== Voter Eligibility Program ===" << endl << endl;
	cout << "Enter your Age: ";
	cin >> voterAge;

	if (voterAge >= 18) {
		cout << "You are eligible to cast your vote";
	}
	else
	{
		cout << "You are not eligible to cast your vote" << endl;
		cout << "You can cast vote after " << 18 - voterAge << " years.";
	}

	getchar();
	getchar();
}