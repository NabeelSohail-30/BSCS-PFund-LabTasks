#include <iostream>
using namespace std;

void print(int* array, int array_size);
void reverse(int array[], int array_size);
void swap(int* a, int* b);

void main()
{
	// Array to hold the values
	int array[] = { 2, 4, -6, 5, 8, -1 };

	cout << "Original Array: ";
	print(array, 6);

	cout << endl << "Reverse Array: ";
	reverse(array, 6);
	print(array, 6);
	
	system("pause>0");
}

// Function to swap two memory contents
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Function to reverse the array through pointers
void reverse(int array[], int array_size)
{

	// pointer1 pointing at the beginning of the array
	int *pointer1 = array,

		// pointer2 pointing at end of the array
		*pointer2 = array + array_size - 1;
	while (pointer1 < pointer2) {
		swap(pointer1, pointer2);
		pointer1++;
		pointer2--;
	}
}

// Function to print the array
void print(int* array, int array_size)
{

	// Length pointing at end of the array
	int *length = array + array_size,

		// Position pointing to the beginning of the array
		*position = array;
	cout << "Array = ";
	for (position = array; position < length; position++)
		cout << *position << " ";
}