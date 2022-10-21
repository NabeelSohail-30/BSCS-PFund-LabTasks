#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct Employee
{
	string Id;
	string Name;
	double Salary;
	string Department;
};

void HighestSal(Employee emp[]);
void Higher(Employee emp[]);
void Finance(Employee emp[]);

void main()
{
	Employee emp[5];

	for (int i = 0; i < 5; i++) {
		if (i == 3) {
			emp[i].Id = "2021F-BCS-211";
			emp[i].Name = "Nabeel";
			emp[i].Salary = 30000;
			emp[i].Department = "IT";
		}
		else {
			cout << "Enter Employee " << i + 1 << " Detail" << endl;
			cout << "Id: ";
			getline(cin, emp[i].Id);
			cout << "Name: ";
			getline(cin, emp[i].Name);
			cout << "Department: ";
			getline(cin, emp[i].Department);
			cout << "Sal: ";
			cin >> emp[i].Salary;
			cout << endl << endl;
			getchar();
		}
	}

	HighestSal(emp);
	cout << endl << endl;
	cout << endl << "Detail of Employee whose salary is greater than 1500:" << endl;
	Higher(emp);
	cout << endl << endl;
	cout << endl << "List of Employees whose Department is Finance" << endl;
	Finance(emp);

	system("pause>0");
}

void HighestSal(Employee emp[]) {
	int high = emp[0].Salary;
	for (int i = 0; i < 5; i++) {
		if (high < emp[i].Salary) {
			high = emp[i].Salary;
		}
	}

	cout << "Highest Salary = " << high;
}

void Higher(Employee emp[]) {
	for (int i = 0; i < 5; i++) {
		if (emp[i].Salary >= 1500) {
			cout << emp[i].Id << " - " << emp[i].Name << " - " << emp[i].Salary << " - " << emp[i].Department << endl;
		}
	}
}

void Finance(Employee emp[]) {
	for (int i = 0; i < 5; i++) {
		if (emp[i].Department == "Finance") {
			cout << emp[i].Id << " - " << emp[i].Name << " - " << emp[i].Salary << " - " << emp[i].Department << endl;
		}
	}
}