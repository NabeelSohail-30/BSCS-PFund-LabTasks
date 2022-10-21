#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

void main()
{
	string str;
	int digit = 0, alpha = 0, space = 0;
	fstream file;

	file.open("example.txt", ios::out);
	file << "This is dummy text file for testing" << endl << "Next Line of File example.txt" << endl << "contact: 0266663352";
	file.close();

	file.open("example.txt", ios::in);

	cout << "Data in example.txt" << endl << endl;
	while (getline(file, str)) {
		cout << str << endl;
		for (char ch : str) {
			if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
				alpha++;
			}
			else if (ch == 32) {
				space++;
			}
			else if (ch >= 48 && ch <= 57) {
				digit++;
			}
		}
	}

	cout << endl << endl;
	cout << "Alphabets: " << alpha << endl;
	cout << "Digits: " << digit << endl;
	cout << "Spaces: " << space << endl;

	file.close();

	system("pause>0");
}