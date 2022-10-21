#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void main() {

	//Simple Calculator using switch case statement

start:
	float num01, num02, result;
	char op, choice;

	system("CLS");
	cout << endl << endl << endl;
	cout << "\t\t\t\t\t\tBasic Simple Calculator";
	cout << endl << endl << endl;

	cout << "\t\t\ta: Addition\tb: Subtarction\tc: Multiplication\td: Division" << endl << endl;
	cout << "\t\t\t\tChoose which operation you want to perform (+,-,*,/): ";
	cin >> op;

	switch (op)
	{
	case '+':	//addition
		system("CLS");

		cout << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t\tEnter Number 01: ";
		cin >> num01;

		cout << "\t\t\t\t\t\tEnter Number 02: ";
		cin >> num02;

		result = num01 + num02;

		cout << endl << endl;
		cout << "\t\t\t\t\t\tSum of " << num01 << " and " << num02 << " = " << result;

		do
		{
			cout << endl << endl << "\t\t\t\t\tDo You Want to Continue. (Y/N): ";
			cin >> choice;

			if (choice == 'Y' || choice == 'y')
			{
				goto start;
			}
			else if (choice == 'N' || choice == 'n') {
				break;
			}

		} while (choice != 'Y' || choice != 'y' || choice != 'N' || choice != 'n');

		break;

	case '-':
		system("CLS");	//subtraction

		cout << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t\tEnter Number 01: ";
		cin >> num01;

		cout << "\t\t\t\t\t\tEnter Number 02: ";
		cin >> num02;

		result = num01 - num02;

		cout << endl << endl;
		cout << "\t\t\t\t\t\tDifference of " << num02 << " and " << num01 << " = " << result;

		do
		{
			cout << endl << endl << "\t\t\t\t\tDo You Want to Continue. (Y/N): ";
			cin >> choice;

			if (choice == 'Y' || choice == 'y')
			{
				goto start;
			}
			else if (choice == 'N' || choice == 'n') {
				break;
			}

		} while (choice != 'Y' || choice != 'y' || choice != 'N' || choice != 'n');

		break;

	case '*':	//multiplication
		system("CLS");

		cout << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t\tEnter Number 01: ";
		cin >> num01;

		cout << "\t\t\t\t\t\tEnter Number 02: ";
		cin >> num02;

		result = num01 * num02;

		cout << endl << endl;
		cout << "\t\t\t\t\t\tProduct of " << num01 << " and " << num02 << " = " << result;

		do
		{
			cout << endl << endl << "\t\t\t\t\tDo You Want to Continue. (Y/N): ";
			cin >> choice;

			if (choice == 'Y' || choice == 'y')
			{
				goto start;
			}
			else if (choice == 'N' || choice == 'n') {
				break;
			}

		} while (choice != 'Y' || choice != 'y' || choice != 'N' || choice != 'n');

		break;

	case '/':	//division
		system("CLS");

		cout << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t\tEnter Number 01: ";
		cin >> num01;

		cout << "\t\t\t\t\t\tEnter Number 02: ";
		cin >> num02;

		result = num01 / num02;

		cout << endl << endl;
		cout << "\t\t\t\t\t\tRatio of " << num01 << " and " << num02 << " = " << result;

		do
		{
			cout << endl << endl << "\t\t\t\t\tDo You Want to Continue. (Y/N): ";
			cin >> choice;

			if (choice == 'Y' || choice == 'y')
			{
				goto start;
			}
			else if (choice == 'N' || choice == 'n') {
				break;
			}

		} while (choice != 'Y' || choice != 'y' || choice != 'N' || choice != 'n');

		break;

	default:
		cout << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t\tInvalid Option entered." << endl;
		cout << "\t\t\t\t\t\tPress any key to try again.";

		getchar();
		getchar();
		goto start;
	}

	getchar();
	getchar();
}