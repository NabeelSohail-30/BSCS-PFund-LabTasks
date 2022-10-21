#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	//program that prints to calculate the age in days.

	float celsius, fahrenheit;

	cout << "Enter Temperature in Degree Celsius: ";
	cin >> celsius;

	fahrenheit = (celsius * (9 / 5)) + 32;

	cout << endl << endl;

	cout << "Temperature in Fahrenheit = " << fahrenheit;

	getchar();	//used to flush the buffer
	getchar();	//used to hold the output screen

	return 0;
}