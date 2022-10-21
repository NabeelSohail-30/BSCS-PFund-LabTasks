#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	//order of evaluation the operation
	//equation: x = 2 % 2 + 2 * 2 - 2 / 2;

	cout << "expression = x = 2 % 2 + 2 * 2 - 2 / 2" << endl;	//expression
	cout << "Step 01 (Division): x = 2 % 2 + 2 * 2 - 1" << endl;	//division performed : 2/2 = 1
	cout << "Step 02 (Modules): x = 0 + 2 * 2 - 1" << endl;	//modules performed : 2%2 = 0
	cout << "Step 03 (Multiplication): x = 0 + 4 - 1" << endl;	//multiplication performed : 2*2 = 4
	cout << "Step 04 (Addition): x = 4 - 1" << endl;	//addition performed : 4+0 = 4
	cout << "Step 05 (Subtraction): x = 3" << endl;	//subtraction performed : 4-1 = 3
	cout << "Final Value: x = 3" << endl;	//Final value for x = 3

	getchar();	//used to hold the output screen

	return 0;
}