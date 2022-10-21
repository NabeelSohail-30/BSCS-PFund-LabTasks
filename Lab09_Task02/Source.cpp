#include <iostream>
#include <conio.h>

using namespace std;

int factorial(int n);

void main()
{
	int n;

	cout << "Enter a positive integer: ";
	cin >> n;

	cout << "Factorial of " << n << " = " << factorial(n);

	system("pause>0");
}

//factorial of a number using recursion.
int factorial(int n)
{
	if (n > 1)
		return n * factorial(n - 1);
	else
		return 1;
}
