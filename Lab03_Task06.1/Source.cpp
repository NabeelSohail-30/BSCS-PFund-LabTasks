#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	//order of evaluation the operation
	//equation: x = 7 + 3 * 6 / 2 - 1;

	cout << "expression = x = 7 + 3 * 6 / 2 - 1" << endl;	//expression
	cout << "Step 01 (Division): x = 7 + 3 * 3 - 1" << endl;	//division performed : 6/2 = 3
	cout << "Step 02 (Multiplication): x = 7 + 9 - 1" << endl;	//multiplication performed : 3*3 = 9
	cout << "Step 03 (Addition): x = 16 - 1" << endl;	//addition performed : 7+9 = 16
	cout << "Step 04 (Subtraction): x = 15" << endl;	//subtraction performed : 16-1 = 15
	cout << "Final Value for x = 15" << endl;	//Final value for x = 15

	getchar();	//used to hold the output screen

	return 0;
}