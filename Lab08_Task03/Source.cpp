#include <iostream>
#include <conio.h>

using namespace std;

float ProductFloatInt(float num1, int num2);

void main()
{
	//Program to find product of int and float using user-defined function

	int num1;
	float num2;

	cout << "Enter Integer value: ";
	cin >> num1;
	cout << "Enter Float value: ";
	cin >> num2;

	cout << "Product = " << ProductFloatInt(num2, num1);

	getchar();
	getchar();
}

float ProductFloatInt(float num1, int num2)
{
	//Function to find product of int and float
	return num1*num2;
}