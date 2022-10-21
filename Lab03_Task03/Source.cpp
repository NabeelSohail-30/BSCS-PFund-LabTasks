#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	//program that prints to calculate the age in days.

	int	days, years;

	cout << "Enter your Age in Years: ";
	cin >> years;

	days = (years*365);

	cout << endl << endl;

	cout << "Your Age in days = " << days;

	getchar();	//used to flush the buffer
	getchar();	//used to hold the output screen

	return 0;
}