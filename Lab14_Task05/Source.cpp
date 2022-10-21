#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

void main()
{
	string str;
	fstream file;

	file.open("Source.cpp", ios::in);

	cout << "Data in Source.cpp" << endl << endl;
	while (getline(file, str)) {
		cout << str << endl;
	}

	file.close();

	system("pause>0");
}