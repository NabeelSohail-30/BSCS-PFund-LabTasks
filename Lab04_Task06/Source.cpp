#include <iostream>
#include <conio.h>

using namespace std;

void main() {

	//Marksheet program using if-else

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
	perc = (totObt/500)*100;

	if (perc >= 90) {
		cout << "You have obtained 'A' grade";
	}
	else if (perc >= 80) {
		cout << "You have obtained 'B' grade";
	}
	else if (perc >= 70) {
		cout << "You have obtained 'C' grade";
	}
	else if (perc >= 60) {
		cout << "You have obtained 'D' grade";
	}
	else if (perc >= 50) {
		cout << "You have obtained 'E' grade";
	}
	else{
		cout << "You have obtained 'F' grade";
	}

	getchar();
	getchar();
}