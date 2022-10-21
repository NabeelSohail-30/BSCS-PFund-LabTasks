#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	//program that take four floating numbers from keyboard and prints their sum, product and average.

	float num01, num02, num03, num04, sum, product, avg;

	cout << "Enter Number 01: ";
	cin >> num01;

	cout << "Enter Number 02: ";
	cin >> num02;

	cout << "Enter Number 03: ";
	cin >> num03;
	
	cout << "Enter Number 04: ";
	cin >> num04;

	sum = (num01+num02+num03+num04);	//Calculating Sum
	product = (num01*num02*num03*num04);	//Calculating Product
	avg = (sum / 4);	//Calculating Average

	cout << endl << endl;

	cout << "Sum of 4 Numbers (" << num01 << ", " << num02 << ", " << num03 << ", " << num04 << ") = " << sum << endl;
	cout << "Product of 4 Numbers (" << num01 << ", " << num02 << ", " << num03 << ", " << num04 << ") = " << product << endl;
	cout << "Average of 4 Numbers (" << num01 << ", " << num02 << ", " << num03 << ", " << num04 << ") = " << avg << endl;


	getchar();	//used to flush the buffer
	getchar();	//used to hold the output screen
	
	return 0;
}