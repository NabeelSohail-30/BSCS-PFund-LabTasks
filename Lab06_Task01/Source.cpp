#include <iostream>
#include <conio.h>

using namespace std;

void main() {

	//program to print first 50 even numbers
	
	for (int i = 0; i <= 50; i++) {
		if (i % 2 == 0) {
			cout << i << endl;
		}
	}

	getchar();
}