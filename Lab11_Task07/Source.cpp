#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int Word_count(string text) {

	int ctr = 0;
	for (int x = 0; x < text.length(); x++)
	{
		if (text[x] == ' ')
			ctr++;
	}
	return ctr + 1;
}

void main() {
	string str;

	cout << "Enter a String: ";
	getline(cin, str);
	
	cout << "Number of words: " << Word_count(str);

	system("pause>0");
}