#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void main()
{
	int temp[7];
	int avgTemp = 0, sumTemp=0;

	cout << "Enter Temperature for 7 Days" << endl;
	for (int i = 0; i < 7; i++) {
		cout << "Day " << i+1 << " : ";
		cin >> temp[i];
	}

	for (int i = 0; i < 7; i++) {
		sumTemp += temp[i];
	}

	avgTemp = sumTemp / 7;

	cout << endl << "Average Temperature of 7 Days: " << avgTemp << endl;

	system("pause>0");
}