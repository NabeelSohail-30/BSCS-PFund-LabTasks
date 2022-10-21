#include <iostream>
#include <conio.h>

using namespace std;

int max_three(int num01, int num02, int num03);

void main()
{
	//Program to find max of three using user-defined function

	int num01, num02, num03;
	cout << "Enter number 01: ";
	cin >> num01;
	cout << "Enter number 02: ";
	cin >> num02;
	cout << "Enter number 03: ";
	cin >> num03;

	cout << "Max = " << max_three(num01, num02, num03);

	getchar();
	getchar();
}

int max_three(int num01, int num02, int num03)
{
	//Function to return max of three

	if (num01 > num02 && num01 > num03)
	{
		return num01;
	}
	else if(num02 > num01 && num02 > num03)
	{
		return num02;
	}
	else if(num03 > num01 && num03 > num02)
	{
		return num03;
	}
	else
	{
		return 0;
	}
}