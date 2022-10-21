#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

void main()
{
	string str;
	fstream file, file2;

	file.open("example.txt", ios::out);
	file << "This is dummy text file for testing" << endl << "Next Line of File example.txt" << endl;
	file << "Coding is Fun" << endl << "Talk is cheap Show me Code" << endl << "Lets Code" << endl << "Blockchain is an emerging technology";
	file.close();

	file.open("example.txt", ios::in);
	file2.open("example2.txt", ios::out);

	cout << "Data in example.txt" << endl << endl;
	while (getline(file, str)) {
		cout << str << endl;
		file2 << str << endl;
	}

	file2.close();
	file2.open("example2.txt", ios::in);

	cout << endl << "Data in example2.txt" << endl << endl;
	while (getline(file2, str)) {
		cout << str << endl;
	}

	file.close();
	file2.close();

	system("pause>0");
}