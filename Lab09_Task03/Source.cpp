#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// function prototype
void reverse(const string& a);

void main() {
	string str;

	cout << " Please enter a string: ";
	getline(cin, str);

	// function call
	reverse(str);

	system("pause>0");
}

// function definition
void reverse(const string& str) {

	// store the size of the string
	size_t numOfChars = str.size();

	if (numOfChars == 1) {
		cout << str << endl;
	}
	else {
		cout << str[numOfChars - 1];

		// function recursion
		reverse(str.substr(0, numOfChars - 1));
	}
}