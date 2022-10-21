#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string Capitalize_first_letter(string text) {

	for (int x = 0; x < text.length(); x++)
	{
		if (x == 0)
		{
			text[x] = toupper(text[x]);
		}
		else if (text[x - 1] == ' ')
		{
			text[x] = toupper(text[x]);
		}
	}

	return text;
}

void main()
{
	string str;

	cout << "Enter a String: ";
	getline(cin, str);

	cout << "String: " << Capitalize_first_letter(str);
	
	system("pause>0");
}