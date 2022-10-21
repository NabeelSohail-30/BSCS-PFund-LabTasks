#include <iostream>
#include <conio.h>

using namespace std;

int sumUpto(int num);

void main()
{
	//Program to find the sum of all natural numbers upto inputted number using user-defined function.

	int num;
	cout << "Enter number: ";
	cin >> num;

	cout << "Sum of all natural numbers upto " << num << " = " << sumUpto(num);

	getchar();
	getchar();
}

int sumUpto(int num)
{
	//Function to find the sum of all natural numbers upto inputted number.
	int counter=0, sum=0;

	for (counter = 0; counter <= num; counter++)
	{
		sum += counter;
	}

	return sum;
}