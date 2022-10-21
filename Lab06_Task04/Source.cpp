#include <iostream>
#include <conio.h>

using namespace std; 

int main()
{
	for (int i = 1; i <= 50; i++)
	{
		/* This statement would be executed
		* repeatedly until the condition
		* i<=50 returns false.
		*/
		cout << "Value of variable i is: " << i - i + 2 * i*i << endl;
	}

	getchar();

	return 0;
}