#include <iostream>
#include <conio.h>

using namespace std;

int fibo(int num);

void main()
{
	int num, c = 0, i;

	cout << "Enter Number: ";
	cin >> num;

	cout << endl << "Fibonacci Sequence" << endl;

	for (i = 1; i <= num; i++)
	{
		cout << fibo(c) << " ";
		c++;
	}

	system("pause>0");
}

//recursive function to obtain the first 25 numbers of a Fibonacci sequence.
int fibo(int num)
{
	if (num == 0)
	{
		return 0;
	}

	else if (num == 1)
	{
		return 1;
	}

	//fibonacci = 1 1 2 3 5 8
	// where n = (n-1) + (n-2)
	else
	{
		return (fibo(num - 1) + fibo(num - 2));
	}
}