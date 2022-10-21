#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void main()
{
	string line;
	int vowels, consonants, digits, spaces;

	vowels = consonants = digits = spaces = 0;

	cout << "Enter a line of string: ";
	getline(cin, line);


	for each (char ch in line)
	{
		if (ch == 'a' || ch == 'e' || ch == 'i' ||
			ch == 'o' || ch == 'u' || ch == 'A' ||
			ch == 'E' || ch == 'I' || ch == 'O' ||
			ch == 'U')
		{
			++vowels;
		}
		else if ((ch >= 'a'&& ch <= 'z') || (ch >= 'A'&& ch <= 'Z'))
		{
			++consonants;
		}
		else if (ch >= '0' && ch <= '9')
		{
			++digits;
		}
		else if (ch == ' ')
		{
			++spaces;
		}
	}

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;

	system("pause>0");
}