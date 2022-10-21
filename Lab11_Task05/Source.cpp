#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void main()
{
	string str;

	cout << "Enter a string: ";
	getline(cin, str);

	reverse(str.begin(), str.end());

	cout << "Reversed string: " << str;

	system("pause>0");
}