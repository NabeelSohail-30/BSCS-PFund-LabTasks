#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	float x, y, z;

	cout << "Enter value for coefficiant of x: ";
	cin >> x;

	cout << "Enter value for coefficiant of y: ";
	cin >> y;

	z = (x + y) / (x - y);

	cout << endl << endl;
	
	cout << "z = " << z;

	getchar();	//used to flush the buffer
	getchar();	//used to hold the output screen

	return 0;
}