#include<iostream>	//cin, cout
#include<conio.h>	//getch, getchar, return
#include<stdio.h>	
//#include<cmath>
//#include<math.h>
#include<string>	//string datatype - string functions
//#include<string.h>
//#include<iomanip>

//to use iostream functions
using namespace std;

//structure
struct Cars
{
	string mark[8];	//array size of 8
	string model[8];
	string color[8];
	string numberplate[8];
};

//global object
Cars car;

//User Defined Functions
void user_input_driver()
{
	system("CLS");
	string name;
	string natio_id;
	string add;
	string phone;
	string card;

	cout << "================================================================================" << endl;
	cout << "\t\t\t\tpersonal deatail" << endl;
	cout << "================================================================================" << endl;
	cout << endl;
	cout << "enter your full name:";
	cin >> name;
	cout << endl;
	cout << "enter your C.N.I.C number:";
	cin >> natio_id;
	cout << endl;
	cin.ignore();
	cout << "enter your address:";
	cin >> add;
	cout << endl;
	cout << "enter your phone number:";
	cin >> phone;
	cout << endl;
	cout << "enter your credit card number:";
	cin >> card;
	cout << endl;

	system("cls");
	cout << "================================================================================" << endl;
	cout << "\t\t\tname:" << name << endl;
	cout << "\t\t\tC.N.I.C number:" << natio_id << endl;
	cout << "\t\t\tphone number:" << phone << endl;
	cout << "\t\t\taddress:" << add << endl;
	cout << "\t\t\tyour card number:" << card << endl;
	cout << "================================================================================" << endl;
}	//with driver

void user_input_ndriver()
{
	system("CLS");
	string name;
	string natio_id;
	string add;
	string phone;
	string card;
	string driver;
	cout << "================================================================================" << endl;
	cout << "\t\t\t\tpersonal deatail" << endl;
	cout << "================================================================================" << endl;
	cout << endl;
	cout << "enter your full name:";
	cin >> name;
	cout << endl;
	cout << "enter your C.N.I.C number:";
	cin >> natio_id;
	cout << endl;
	cout << "enter your address:";
	cin >> add;
	cout << endl;
	cout << "enter your phone number:";
	cin >> phone;
	cout << endl;
	cout << "enter your credit card number:";
	cin >> card;
	cout << endl;
	cout << "enter your driving license number";
	cin >> driver;

	system("cls");
	cout << "================================================================================" << endl;
	cout << "\t\t\tname:" << name << endl;
	cout << "\t\t\tC.N.I.C number:" << natio_id << endl;
	cout << "\t\t\tphone number:" << phone << endl;
	cout << "\t\t\taddress:" << add << endl;
	cout << "\t\t\tyour card number:" << card << endl;
	cout << "\t\t\tenter your driven license number:" << driver << endl;
	cout << "================================================================================" << endl;
}	 //without driver

void Menu()
{
	//car.mark[] = values assign to all the elements
	car.mark[0] = "Suzuki Alto";
	car.mark[1] = "Suzuki WagonR";
	car.mark[2] = "Toyota Corolla";
	car.mark[3] = "Honda Civic";
	car.mark[4] = "Toyota Prado";
	car.mark[5] = "mercedes CLA 200";
	car.mark[6] = "Hiace Grand Cabin";
	car.mark[7] = "Toyota Hilux - Revo";

	int num = 1;
	for (int i = 0; i < 8; i++)
	{
		cout << "\t\t";
		cout << "Enter " << num << "\t- To Select  " << car.mark[i] << endl;
		num++;
	}
}
void Details(int theChoice)
{
	//assign values to all the elements of structure car
	car.model[0] = "2021";
	car.model[1] = "2021";
	car.model[2] = "2021";
	car.model[3] = "2021";
	car.model[4] = "2020";
	car.model[5] = "2020";
	car.model[6] = "2019";
	car.model[7] = "2020";

	car.color[0] = "white";
	car.color[1] = "off white";
	car.color[2] = "black";
	car.color[3] = "black";
	car.color[4] = "white";
	car.color[5] = "jet black";
	car.color[6] = "white";
	car.color[7] = "metal black";

	car.numberplate[0] = "AJY-865";
	car.numberplate[1] = "BAR-334";
	car.numberplate[2] = "BTY-001";
	car.numberplate[3] = "BUI-245";
	car.numberplate[4] = "AZZ-988";
	car.numberplate[5] = "BTA-200";
	car.numberplate[6] = "BSE-456";
	car.numberplate[7] = "AZY-003";

	cout << "\n\n\n\t\t\t-----------------------------\n";
	cout << "\t\t\tYou Have Selected - " << car.mark[theChoice - 1] << endl;	//index starts from 0
	cout << "\t\t\t-----------------------------\n";
	cout << "\t\t\tModel : " << car.model[theChoice - 1] << endl;
	cout << "\t\t\tColor : " << car.color[theChoice - 1] << endl;
	cout << "\t\t\tcar number plate  : " << car.numberplate[theChoice - 1] << endl;
}

//Main Function
void main()
{
	int choice, choice1, choice2;
	char choice3;

	string price[2][4] = {
		{ "\t5-hours","\t\tdaily","\t\tweekly","\t\tmonthly" },
		{ "\t1699-Rs","\t\t2999-Rs", "\t\t18999-Rs","\t71999-Rs" }
	};

	string price1[2][4] = {
		{ "\t5-hours","\t\tdaily","\t\tweekly","\t\tmonthly" },
		{ "\t1699-Rs","\t\t2999-Rs", "\t\t18999-Rs","\t71999-Rs" }
	};

	string price2[2][4] = {
		{ "\t5-hours","\t\tdaily","\t\tweekly","\t\tmonthly" },
		{ "\t2099-Rs","\t\t3499-Rs", "\t\t24999-Rs","\t92999-Rs" }
	};

	string price3[2][4] = {
		{ "\t5-hours","\t\tdaily","\t\tweekly","\t\tmonthly" },
		{ "\t3499-Rs","\t\t5499-Rs", "\t\t34999-Rs","\t129999-Rs" }
	};

	string price4[2][3] = {
		{ "\t\tdaily","\t\tweekly","\t\tmonthly" },
		{ "\t\t12000-Rs", "\t\t80000-Rs","\t270000-Rs" }
	};

	string price5[2][4] = {
		{ "\t5-hours","\t\tdaily","\t\tweekly","\t\tmonthly" },
		{ "\t16999-Rs","\t19999-Rs", "\t125999-Rs","\t509999-Rs" }
	};

	string price6[2][3] = {
		{ "\t\tdaily","\t\tweekly","\t\tmonthly" },
		{ "\t\t2999-Rs", "\t\t18999-Rs","\t71999-Rs" }
	};

	string price7[2][3] = {
		{ "\t\tdaily","\t\tweekly","\t\tmonthly" },
		{ "\t\t7500-Rs", "\t\t50000-Rs","\t170000-Rs" }
	};

	string decide = "yes";	//intial value

	//display start
start:
	system("cls");
	cout << "================================================================================" << endl;
	cout << "\t\t\t\t\b welcome to  Wheel Steals\b " << endl;
	cout << "================================================================================" << endl;
	cout << endl;

	cout << " Get the Best Car Rental Experience" << endl;
	cout << " Order Car With Driver" << endl;
	cout << " In Karachi" << endl;
	cout << " Starting From PKR. 1,699 half day - PKR 18,999 per" << endl;
	cout << " week - PKR. 71,999 per month" << endl;
	cout << " ==>All prices are exclusive of taxes." << endl;
	cout << " *24hrs at Karachi International            *Good Car Guaranteed " << endl;
	cout << "Airport\t\t\t\t\t  If you don't like it, we replace it" << endl;
	cout << endl;
	cout << "* Cars delivered to your location " << endl;
	cout << "within a day." << endl;
	cout << endl;
	cout << endl;

	cout << "1:book now " << endl;
	cout << "press 1 to continue";
	cin >> choice;

	if (choice == 1)
	{
		system("cls");	//Screen Clear
	A:	//point - goto
		cout << "================================================================================" << endl;
		cout << "\t\t\t Ride collection" << endl;
		cout << "================================================================================" << endl;
		Menu();
		cout << endl;
		cout << "select your ride:";	//user input for ride choice
		cin >> choice1;
		system("CLS");
		Details(choice1);
		cout << endl;

		switch (choice1)
		{
		case 1:
			for (int i = 0; i < 2; i++)	//rows
			{
				for (int j = 0; j < 4; j++)	//cols
				{
					cout << "" << price[i][j];
				}
				cout << endl;
			}

			cout << endl;
			cout << "for how much time do you want? :" << "\t\t\t\t only press 1 till 4" << endl;
			cout << "your choice :";
			cin >> choice2;

			system("cls");	//clear screen

			//user input - rental time - details display
			if (choice2 == 1)	//(==) equality, (=) assign
			{
				double daily = 339.8;	//initialized - perhour charge
				double hour;
				double total;

				cout << "================================================================================" << endl;
				cout << "\t\t\t\t per hour" << endl;
				cout << "================================================================================" << endl;
				cout << "how many hours for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;	//round() value round of - 20.5 - 21
				cout << endl;

				cout << "do you want with or without dirver ?(y or n):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();	//without driver
					Details(choice1);
				}


			}
			else if (choice2 == 2)
			{
				double daily = 2999;
				double hour;
				double total;

				cout << "================================================================================" << endl;
				cout << "\t\t\t\t daliy" << endl;
				cout << "================================================================================" << endl;
				cout << "how many days for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else if (choice2 == 3)
			{
				double daily = 18999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t weekly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many weeks for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else
			{
				double daily = 71999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t monthly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many months for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}

			break;
		case 2:
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout << "" << price1[i][j];

				}
				cout << endl;
			}
			cout << endl;
			cout << "how many time for you want:" << "\t\t\t\t only press 1 till 4" << endl;
			cout << "your choice :";
			cin >> choice2;
			system("cls");
			if (choice2 == 1)
			{
				double daily = 339.8;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t per hour" << endl;
				cout << "================================================================================" << endl;
				cout << "how many hours for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}


			}
			else if (choice2 == 2)
			{
				double daily = 2999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t daliy" << endl;
				cout << "================================================================================" << endl;
				cout << "how many days for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else if (choice2 == 3)
			{
				double daily = 18999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t weekly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many weeks for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else
			{
				double daily = 71999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t monthly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many months for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			break;
		case 3:
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout << "" << price2[i][j];

				}
				cout << endl;
			}
			cout << endl;
			cout << "how many time for you want:" << "\t\t\t\t only press 1 till 4" << endl;
			cout << "your choice :";
			cin >> choice2;
			system("cls");
			if (choice2 == 1)
			{
				double daily = 419.8;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t per hour" << endl;
				cout << "================================================================================" << endl;
				cout << "how many hours for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}

			}
			else if (choice2 == 2)
			{
				double daily = 3999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t daliy" << endl;
				cout << "================================================================================" << endl;
				cout << "how many days for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);
				}
			}
			else if (choice2 == 3)
			{
				double daily = 24999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t weekly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many weeks for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else
			{
				double daily = 92999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t monthly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many months for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			break;
		case 4:
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout << "" << price3[i][j];

				}
				cout << endl;
			}
			cout << endl;
			cout << "how many time for you want:" << "\t\t\t\t only press 1 till 4" << endl;
			cout << "your choice :";
			cin >> choice2;
			system("cls");
			if (choice2 == 1)
			{
				double daily = 699.8;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t per hour" << endl;
				cout << "================================================================================" << endl;
				cout << "how many hours for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}

			}
			else if (choice2 == 2)
			{
				double daily = 5499;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t daliy" << endl;
				cout << "================================================================================" << endl;
				cout << "how many days for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else if (choice2 == 3)
			{
				double daily = 34999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t weekly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many weeks for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else
			{
				double daily = 129999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t monthly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many months for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			break;
		case 5:
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cout << "" << price4[i][j];

				}
				cout << endl;
			}
			cout << endl;
			cout << "how many time for you want:" << "\t\t\t\t only press 1 till 3" << endl;
			cout << "your choice :";
			cin >> choice2;
			system("cls");
			if (choice2 == 1)
			{
				double daily = 12000;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t daliy" << endl;
				cout << "================================================================================" << endl;
				cout << "how many days for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else if (choice2 == 2)
			{
				double daily = 80000;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t weekly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many weeks for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else
			{
				double daily = 270000;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t monthly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many months for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			break;
		case 6:
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout << "" << price5[i][j];

				}
				cout << endl;
			}
			cout << endl;
			cout << "how many time for you want:" << "\t\t\t\t only press 1 till 4" << endl;
			cout << "your choice :";
			cin >> choice2;
			system("cls");
			if (choice2 == 1)
			{
				double daily = 3399.8;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t per hour" << endl;
				cout << "================================================================================" << endl;
				cout << "how many hours for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}


			}
			else if (choice2 == 2)
			{
				double daily = 19999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t daliy" << endl;
				cout << "================================================================================" << endl;
				cout << "how many days for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else if (choice2 == 3)
			{
				double daily = 125999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t weekly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many weeks for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else
			{
				double daily = 509999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t monthly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many months for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			break;
		case 7:
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cout << "" << price6[i][j];

				}
				cout << endl;
			}
			cout << endl;
			cout << "how many time for you want:" << "\t\t\t\t only press 1 till 3" << endl;
			cout << "your choice :";
			cin >> choice2;
			system("cls");
			if (choice2 == 1)
			{
				double daily = 2999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t daliy" << endl;
				cout << "================================================================================" << endl;
				cout << "how many days for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else if (choice2 == 2)
			{
				double daily = 18999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t weekly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many weeks for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else
			{
				double daily = 71999;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t monthly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many months for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			break;
		case 8:
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cout << "" << price7[i][j];

				}
				cout << endl;
			}
			cout << endl;
			cout << "how many time for you want:" << "\t\t\t\t only press 1 till 3" << endl;
			cout << "your choice :";
			cin >> choice2;
			system("cls");
			if (choice2 == 1)
			{
				double daily = 7500;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t daliy" << endl;
				cout << "================================================================================" << endl;
				cout << "how many days for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else if (choice2 == 2)
			{
				double daily = 50000;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t weekly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many weeks for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			else
			{
				double daily = 170000;
				double hour;
				double total;
				cout << "================================================================================" << endl;
				cout << "\t\t\t\t monthly" << endl;
				cout << "================================================================================" << endl;
				cout << "how many months for you want::";
				cin >> hour;
				total = hour * daily;
				cout << endl;
				cout << "your bill is = " << round(total) << "/Rs" << endl;
				cout << endl;
				cout << "do you want with or without dirver ?(y or no):";
				cin >> choice3;
				if (choice3 == 'y' || choice3 == 'Y')
				{
					user_input_driver();
					Details(choice1);
				}
				else
				{
					user_input_ndriver();
					Details(choice1);

				}
			}
			break;

		default:
			cout << "Invalid Choice, Press any key to continue" << endl;
			system("pause>0");
			goto A;
		}

		cout << "\n\tAre You Sure, you want to rent this Car? (yes /no  ) : ";
		cin >> decide;
		if (decide == "yes")
		{
			cout << "thnx for using our app " << endl;
			cout << "your car will driver with in your address in 24 hours" << endl;
		}
		else
		{
			system("cls");
			goto A;
		}
	}
	else {
		cout << "Invalid Choice" << endl;
		system("pause>0");
		goto start;
	}
	system("pause>0");
}

