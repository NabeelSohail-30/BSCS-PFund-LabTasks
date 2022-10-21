#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

void main()
{
	string str;
	int line = 0;
	fstream file;

	file.open("example.txt", ios::out);
	file << "This is dummy text file for testing" << endl << "Next Line of File example.txt" << endl << "contact: 2021-666633-52";
	file.close();

	file.open("example.txt", ios::in);

	cout << "Data in example.txt" << endl << endl;
	while (getline(file, str)) {
		line++;
		cout << str << endl;
	}
	cout << endl << "Total Lines in file: " << line;
	file.close();

	system("pause>0");
}