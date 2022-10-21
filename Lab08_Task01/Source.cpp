#include <iostream>
#include <conio.h>

using namespace std;

void PrintMyName();

void main()
{
	//Program to print name 10 times using user-defined function
	PrintMyName();
	getchar();
}

void PrintMyName()
{
	//Function to prints your name 10 times.
	for (int i = 0; i <= 9; i++)
	{
		cout << i+1 << " = Nabeel" << endl;
	}
}