#include <iostream>
#include <conio.h>

using namespace std;

void factorial(int num);

void main()
{
	//Program to find factorial using user-defined function

	int num;

	cout << "Enter a positive integer: ";
	cin >> num;

	factorial(num);

	getchar();
	getchar();
}

void factorial(int num)
{
	//Function to calculate the factorial
	int factorial=1;

	if (num < 0)
		cout << "Error! Factorial of a negative number doesn't exist.";
	else {
		for (int i = 1; i <= num; ++i) {
			factorial *= i;
		}
		cout << "Factorial of " << num << " = " << factorial;
	}
}