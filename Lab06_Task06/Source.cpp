#include <iostream>
#include <conio.h>

using namespace std;

void main() {
	int k=0;
	for (int i = 1; i <= 5; i++) {
		k = 0;
		for (int j = 1; j<=5;j++)
		{ 
			k = k + i;
			cout << k << "\t";
		}
		cout << endl;
	}

	getchar();
}