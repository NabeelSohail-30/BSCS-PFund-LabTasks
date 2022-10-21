#include <iostream>
#include <conio.h>

using namespace std;

void main() {

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}

	getchar();
}