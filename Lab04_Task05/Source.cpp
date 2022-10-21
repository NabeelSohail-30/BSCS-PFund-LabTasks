#include <iostream>
#include <conio.h>

using namespace std;

void main() {

	//Program to find maximum between three numbers

	int num01, num02, num03;

	cout << "Enter number 01: ";
	cin >> num01;
	cout << "Enter number 02: ";
	cin >> num02;
	cout << "Enter number 03: ";
	cin >> num03;

	if (num01 > num02 && num01 > num03) {
		cout << endl << "Number 01 is greater";
	}
	else if (num02 > num01 && num02 > num03)
	{
		cout << endl << "Number 02 is greater";
	}
	else if (num03 > num01 && num03 > num02)
	{
		cout << endl << "Number 03 is greater";
	}
	else
	{
		cout << endl << "All Numbers are equal";
	}

	getchar();
	getchar();
}