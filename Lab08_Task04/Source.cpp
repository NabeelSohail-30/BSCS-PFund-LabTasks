#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void CircularlyShift(int& a, int& b, int& c);

void main()
{
	//Program to circularly shift their values to right using user-defined function
	int a, b, c;

	cout << "Enter Value for a: ";
	cin >> a;
	cout << "Enter Value for b: ";
	cin >> b;
	cout << "Enter Value for c: ";
	cin >> c;

	cout << "\nBefore Circularly Shift\n";
	cout << "a: " << a << " b: " << b << " c: " << c << endl;

	CircularlyShift(a, b, c);

	cout << "\nAfter Circularly Shift\n";
	cout << "a: " << a << " b: " << b << " c: " << c << endl;


	getchar();
	getchar();
	getchar();
}

void CircularlyShift(int& a, int& b, int& c)
{
	//Function to circularly shift their values to right.
	int arr[3];
	int temp;
	temp = c;
	c = b;
	b = a;
	a = temp;
}