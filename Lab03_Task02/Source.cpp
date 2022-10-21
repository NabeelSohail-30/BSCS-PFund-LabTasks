#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	//program to calculate the area of the circle, taking the value of the radius from the user.

	float radius, areaOfCircle;
	const float pi = 3.142;

	cout << "Enter of radius of Circle to calculate Area: ";
	cin >> radius;

	areaOfCircle = (pi*(pow(radius, 2)));

	cout << endl << endl;

	cout << "Area of Circle = " << areaOfCircle;

	getchar();	//used to flush the buffer
	getchar();	//used to hold the output screen

	return 0;
}