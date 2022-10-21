#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int c;

	c = 100;

	while (c <= 150) {
		if (c % 4 == 0) {
			cout << c << "\t";
		}

		c++;
	}

	getchar();
}