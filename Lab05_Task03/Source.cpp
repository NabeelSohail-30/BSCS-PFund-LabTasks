#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int monthNumber;

	cout << "\t\t\t\t\tProgram to print Number of Days in a month";

	cout << endl << endl << endl << endl;

	cout << "\t\t\t\t\t\tEnter number of month: ";
	cin >> monthNumber;

	cout << endl << endl;

	switch (monthNumber)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "\t\t\t\t\t\tDays in Month: 31 days";
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		cout << "\t\t\t\t\t\tDays in Month: 30 days";
		break;

	case 2:
		cout << "\t\t\t\t\t\tDays in Month: 28/29 days";
		break;

	default:
		cout << "\t\t\t\t\t\tInvalid Month Number entered";
		break;
	}

	getchar();
	getchar();
}