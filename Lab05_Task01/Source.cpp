#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int i = 2;
	switch (i)
	{
	case 1:
		cout << "I am in case 1 \n" << endl;
	case 2:
		cout << "I am in case 2 \n" << endl;
	case 3:
		cout << "I am in case 3 \n" << endl;
	default:
		cout << "I am in default \n" << endl;
	}

	getchar();
}