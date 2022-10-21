#include <iostream>
#include <conio.h>

using namespace std;

void main() {

	//Program to find factorial
	int counter, fact=1, num;

	cout << "Factorial of a Number";
	cout << endl << endl;
	cout << "Enter a Number to find factorial: ";
	cin >> num;

	while (num < 0) {
		cout << "Enter a positive number to find factorial and try again. " << endl;
		cout << "Factorials cannot be found for negative values." << endl << endl;
		cout << "Enter a Number to find factorial: ";
		cin >> num;
	}

	for (counter = 1; counter <= num; counter++) {
		fact *= counter;
	}

	cout << "Entered number is " << num << " and its factorial is " << fact;

	getchar();
	getchar();
}