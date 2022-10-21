#include <iostream>
#include <conio.h>

using namespace std;

void main() {

	//Marksheet program using switch case

	float phy, chem, bio, math, comp, perc, totObt;

	cout << "=== Student's Marksheet ===" << endl << endl;

	cout << "Enter Marks for Physics: ";
	cin >> phy;
	cout << "Enter Marks for Chemistry: ";
	cin >> chem;
	cout << "Enter Marks for Biology: ";
	cin >> bio;
	cout << "Enter Marks for Math: ";
	cin >> math;
	cout << "Enter Marks for Computer: ";
	cin >> comp;

	totObt = (phy + bio + chem + math + comp);
	perc = (totObt / 500) * 100;

	switch ((int)perc)
	{
	case 90:
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
	case 97:
	case 98:
	case 99:
	case 100:
		cout << "You have obtained 'A' grade";
		break;


	case 80:
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
	case 86:
	case 87:
	case 88:
	case 89:
		cout << "You have obtained 'B' grade";
		break;


	case 70:
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
	case 76:
	case 77:
	case 78:
	case 79:
		cout << "You have obtained 'C' grade";
		break;


	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
		cout << "You have obtained 'D' grade";
		break;


	case 40:
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
		cout << "You have obtained 'E' grade";
		break;

	default:
		cout << "You have obtained 'F' grade";

	}

	

	getchar();
	getchar();
}