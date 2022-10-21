#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	//program to calculate roots of Quadratic Equation.

	//The term b2 - 4ac is known as the discriminant of a quadratic equation. It tells the nature of the roots.
	//If the discriminant is greater than 0, the roots are real and different.
	//If the discriminant is equal to 0, the roots are real and equal.
	//If the discriminant is less than 0, the roots are complex and different.
	

	double a, b, c, discriminant, bSqr, pr4ac, posRoot, negRoot, realPart, imagPart;

	cout << "Enter value for coefficiant of a (value must be greater than 0): ";
	cin >> a;

	cout << "Enter value for coefficiant of b: ";
	cin >> b;

	cout << "Enter value for coefficiant of c: ";
	cin >> c;

	bSqr = pow(b, 2);
	pr4ac = (4 * a*c);
	discriminant = (bSqr - pr4ac);

	cout << endl << endl;

	//condition for real and different roots
	if (discriminant > 0) {
		posRoot = (-b + sqrt(discriminant)) / (2 * a);
		negRoot = (-b - sqrt(discriminant)) / (2 * a);
		cout << "Root1 = " << posRoot << endl;
		cout << "Root2 = " << negRoot << endl;
	}

	//condition for real and equal roots
	if (discriminant == 0) {
		posRoot = negRoot = (-b) / (2 * a);
		cout << "Root1 = " << posRoot << endl;
		cout << "Root2 = " << negRoot << endl;
	}

	//condition for non-real roots
	if (discriminant < 0) {
		realPart = (-b)/(2 * a);
		imagPart = sqrt(-discriminant) / (2 * a);
		cout << "Root1 = " << realPart << "+" << imagPart << "i" << endl;
		cout << "Root2 = " << realPart << "-" << imagPart << "i" << endl;
	}

	getchar();	//used to flush the buffer
	getchar();	//used to hold the output screen

	return 0;
}