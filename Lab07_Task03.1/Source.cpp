#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	//Program to find factorial using while loop

	int num, factorial = 1, counter=1;

	cout << "Enter Number: ";
	cin >> num;

	if (num < 0)
		cout << "Error! Factorial of a negative number doesn't exist.";
	else
	{
		while (counter <= num) {
			factorial *= counter;
			counter++;
		}
		cout << "Factorial of " << num << " = " << factorial;
	}

	getchar();
	getchar();
	
}