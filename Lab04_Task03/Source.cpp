#include <iostream>
#include <conio.h>

using namespace std;

void main() {

	//Program to display greater Roll no. of two

	int rollNum01, rollNum02;

	cout << "Enter your roll number: ";
	cin >> rollNum01;

	cout << "Enter your friend's roll number: ";
	cin >> rollNum02;
	
	//checks if rollNum01 is greater than rollNum02 or vice versa
	if (rollNum01 > rollNum02)
	{
		cout << "Your roll number is greater than your friend's" << endl;
	}
	else
	{
		cout << "Your friend's roll number is greater than your's" << endl;
	}

	getchar();
	getchar();
}