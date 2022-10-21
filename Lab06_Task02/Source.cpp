#include <iostream>
#include <conio.h>

using namespace std;

void main() {

	//Program to generate multiplication table
	int multiplier, multiplicandRange, counter;

	cout << "\t\t\t\t\t\tMultiplication Table";
	cout << endl << endl;

	cout << " Enter Multiplier Number: ";
	cin >> multiplier;
	cout << " Enter Multiplicand Range: ";
	cin >> multiplicandRange;

	cout << endl << endl;

	for (counter = 0; counter <= multiplicandRange; counter++) {
		cout << multiplier << " * " << counter << " = " << (multiplier*counter) << endl;
	}

	getchar();
	getchar();
}