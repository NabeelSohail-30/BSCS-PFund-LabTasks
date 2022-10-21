#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {

	int a, b, c,pos, neg;

	cout << "Enter value for coefficiant of a (value must be greater than 0): ";
	cin >> a;

	cout << "Enter value for coefficiant of b: ";
	cin >> b;

	cout << "Enter value for coefficiant of c: ";
	cin >> c;

	cout << endl << endl;

	pos = (-b + sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
	neg = (-b - sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
	cout << "Root1 = " << pos << endl;
	cout << "Root2 = " << neg << endl;

	return 0;
}
