#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int h, j;
	int *ptrH, *ptrJ;

	ptrH = &h;
	ptrJ = &j;

	cout << "Enter value 01: ";
	cin >> h;
	cout << "Enter value 02: ";
	cin >> j;

	cout << endl << "Value 01: " << *ptrH;
	cout << endl << "Value 02: " << *ptrJ;

	system("pause>0");
}