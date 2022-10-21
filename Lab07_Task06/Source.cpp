#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int a;

	cout << "Enter positive integer (less than 9999): ";
	cin >> a;
}

string StringOnes(char Number[3])
{
	int _Number = (int)Number;
	string name = "";
	switch (_Number)
	{

	case 1:
		name = "One";
		break;
	case 2:
		name = "Two";
		break;
	case 3:
		name = "Three";
		break;
	case 4:
		name = "Four";
		break;
	case 5:
		name = "Five";
		break;
	case 6:
		name = "Six";
		break;
	case 7:
		name = "Seven";
		break;
	case 8:
		name = "Eight";
		break;
	case 9:
		name = "Nine";
		break;
	}
	return name;
}