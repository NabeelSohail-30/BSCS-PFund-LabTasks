#include <iostream>
using namespace std;

void main() {

	int a;
	cout << "Enter number: ";
	cin >> a;
	int *ptr_a = &a;

	cout << endl;
	cout << "The pointer values is " << *ptr_a << " the memory address is: " << ptr_a;

	system("pause>0");
}