#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void main()
{
	int num[] = { 45,25,69,32,45,89,23,12 };
	int arrLen = sizeof(num) / sizeof(num[0]);

	cout << "Array in Normal order." << endl;
	for (int i = 0; i < arrLen; i++) {
		cout << num[i] << endl;
	}

	cout << endl;

	cout << "Array in Reverse order." << endl;
	for (int i = arrLen-1; i >= 0; i--) {
		cout << num[i] << endl;
	}

	system("pause>0");
}