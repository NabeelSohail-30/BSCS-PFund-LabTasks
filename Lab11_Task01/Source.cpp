#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void main()
{
	string str1, str2;
	int pos=0;

	cout << "Enter string: ";
	getline(cin, str1);

	cout << "Enter sub string: ";
	getline(cin, str2);

	pos = str1.find(str2)+1;

	cout << pos;
	
	system("pause>0");
}