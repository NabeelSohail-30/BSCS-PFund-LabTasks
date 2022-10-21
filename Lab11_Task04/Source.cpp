#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void main()
{
	string str;

	cout << "Enter a string: ";
	getline(cin, str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')    //checking for uppercase characters
			str[i] = str[i] + 32;         //converting uppercase to lowercase
	}

	cout << endl << "The string in lower case: " << str;

	system("pause>0");
}
