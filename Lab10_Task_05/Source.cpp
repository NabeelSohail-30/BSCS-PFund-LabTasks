#include <iostream>
#include <conio.h>

using namespace std;

void HighestSale(double emp[6][4]);
void PoorPerformance(double emp[6][4]);

void main()
{
	double EmpSal[6][4] = {
		{320000,556000,498000,479000},
		{525000,456000,550000,479000},
		{430000,390000,375000,320000},
		{325000,459000,455000,495000},
		{480000,500000,435000,440000},
		{590000,570000,520000,425000}
	};

	HighestSale(EmpSal);
	cout << endl << endl;
	PoorPerformance(EmpSal);

	system("pause>0");
}

void PoorPerformance(double emp[6][4])
{
	int month,index = 0;
	double lowestSale;

	cout << "Enter Month Number (1-4): ";
	cin >> month;

	lowestSale = emp[0][month];

	for (int i = 0; i < 6; i++)
	{
		if (lowestSale >= emp[i][month]) {
			lowestSale = emp[i][month];
			index = i;
		}
	}

	cout << endl << "Employee no. " << index + 1 << " has the lowest sale " << lowestSale;

}

void HighestSale(double emp[6][4])
{
	double sal[6];
	double high;
	int index = 0;

	for (int i = 0; i < 6; i++)
	{
		sal[i] = 0;
		for (int j = 0; j < 4; j++)
		{
			sal[i] += emp[i][j];
		}
	}

	high = sal[0];

	for (int i = 0; i < 6; i++)
	{
		if (high < sal[i]) {
			high = sal[i];
			index = i;
		}
	}

	cout << endl << "Employee " << index + 1 << " has the highest overall sale " << high << " over the first quarter.";
}