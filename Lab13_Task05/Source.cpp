#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int n; int i; int max = 0;
	int arr[100];

	cout << "Enter number of values(MAX 100):";
	cin >> n;

	cout << "Enter values in array:\n";
	for (i = 0; i<n; i++) {

		cin >> arr[i];
	}


	for (int u = 0; u <= n; u++) {
		if (arr[u]>max)
			max = arr[u];
	}

	int *pointer = &max;


	cout << "Largest integer value in the array is " << *pointer;

	system("pause>0");
}