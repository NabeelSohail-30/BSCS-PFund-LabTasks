#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void main()
{
	string str;
	int i, length;
	int flag = 0;

	cout << "Enter a string: ";
	getline(cin, str);

	length = str.length();

	for (i = 0; i < length; i++) {
		if (str[i] != str[length - i - 1]) {
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << str << " is not a palindrome" << endl;
	}
	else {
		cout << str << " is a palindrome" << endl;
	}
	system("pause");
}