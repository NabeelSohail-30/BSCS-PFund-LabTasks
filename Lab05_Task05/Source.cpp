#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	//Check Validaty of triangle using switch case when sides/angle are given
	int sideA, sideB, sideC, sum;

	cout << "\t\t\t\t\t\tProgram to validate triangle";

	cout << endl << endl << endl << endl;

	cout << "\t\t\t\t\t\tEnter Value of Side A: ";
	cin >> sideA;

	cout << "\t\t\t\t\t\tEnter Value of Side B: ";
	cin >> sideB;

	cout << "\t\t\t\t\t\tEnter Value of Side C: ";
	cin >> sideC;

	sum = sideA + sideB + sideC;

	cout << endl << endl;

	switch (sum) {
	case 180:
		cout << "\t\t\t\t\t\tTriangle is valid";
		break;

	default:
		cout << "\t\t\t\t\t\tTriangle is invalid";
	}

	getchar();
	getchar();
}