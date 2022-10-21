#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	//program that checks whether a number is prime or not by using if else structure and while loop.

	int num, i = 2, a = 0;
	cout << "Enter any Number: ";
	cin >> num;
	while (i <= num / 2)
	{
		if (num%i == 0)
		{
			a = 1;
			break;
		}
		i++;
	}
	if (a == 0)

		cout << num << " is a Prime Number.\n";
	else

		cout << num << " is Not a Prime Number.\n";

	getchar();
	getchar();
}