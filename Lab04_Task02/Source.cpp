#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	//program that takes a number as input from user and checks whether the Number is even or odd.

	int num; 

	cout << "Enter a Number: ";
	cin >> num;

	if (num % 2 == 0) {
		cout << "Number " << num << " is Even Number";
	}
	else {
		cout << "Number " << num << " is Odd Number";
	}

	getchar();	//used to flush the buffer
	getchar();	//used to hold the output screen

	return 0;
}