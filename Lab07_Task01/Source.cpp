#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	//program that prints the first 50 even numbers by using while loop

	int counter = 0;

	while (counter <= 100) {
		if (counter % 2 == 0) {
			cout << counter << "\t";
		}

		counter++;
	}

	getchar();
}