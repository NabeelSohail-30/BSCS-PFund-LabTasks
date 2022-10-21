#include <iostream>
#include <conio.h>

using namespace std;

int SumSeries(int num);

void main()
{
	int i=10;

	cout << "Sum of first 10 terms of the given series: " << SumSeries(i);

	system("pause>0");
}

int SumSeries(int num) {
	if (num == 1)
	{
		return 4;
	}
	else {
		return ((2 * num) + 2) + SumSeries(num - 1);
	}
}