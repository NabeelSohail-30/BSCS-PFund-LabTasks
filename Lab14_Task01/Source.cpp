#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

void main()
{
	string str;
	ofstream file;
	ifstream filein;

	file.open("example.txt", ios::out);
	
	file << "This is dummy text file for testing" << endl << "Next Line of File example.txt" << endl;
	file << "Coding is Fun" << endl << "Talk is cheap Show me Code" << endl << "Lets Code" << endl << "Blockchain is an emerging technology";

	file.close();

	filein.open("example.txt", ios::in);

	while (getline(filein, str)) {
		cout << str << endl;
	}

	filein.close();

	system("pause>0");
}