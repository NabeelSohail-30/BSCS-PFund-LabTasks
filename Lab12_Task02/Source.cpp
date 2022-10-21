#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

void addbook();
void displaybook();
void bookauthor();
int countbook();
void listacc();
void assacc();

struct library
{
	int accessionNumber;/*Accession number*/
	string BookTitle;
	string BookAuthor;
	float price;
	int flag;

}booklib[1000] = {
	1, "Let Us C", "Yashavant", 258, 1,
	2, "Data Structure Through C", "Yashavant", 300, 1,
	3, "Let Us C++", "Yashavant", 220, 1,
	4, "Harry Potter : The Philosopher's Stone", "J. K. Rowling", 550, 0,
	5, "The Two Towers", "J. R. R. Tolkien", 560, 1,
	6, "The Hobbit", "J. R. R. Tolkien", 550, 0,
	7, "The Fellowship of the Ring", "J. R. R. Tolkien", 550, 0
};

void main()
{
	int accessionNumbers = 1, accessionNumber;
	string auth;

	while (1)
	{
		system("cls");
		cout << "Main Menu\n\n";
		cout << "\n1. Add Book Information";
		cout << "\n2. Display Book Information";
		cout << "\n3. List all books of given Book Author";
		cout << "\n4. List the Book Title of specified book";
		cout << "\n5. List the counts of the books in library";
		cout << "\n6. List the books in order of accession number";
		cout << "\n7. Exit";

		cout << "\n\nEnter you choice : ";
		cin >> accessionNumbers;

		switch (accessionNumbers)
		{
		case 1:
			addbook();
			system("pause>0");
			break;
		case 2:
			displaybook();
			system("pause>0");

			break;
		case 3:
			bookauthor();
			system("pause>0");

			break;
		case 4:
			listacc();
			system("pause>0");

			break;
		case 5:
			cout << "Total Number of Books: " << countbook();
			system("pause>0");

			break;
		case 6:
			assacc();
			system("pause>0");

			break;
		case 7:
			exit(1);
		default:
			cout << "\nWrong choice, Try Again!!";
		}
	}

	system("pause>0");
}

void addbook() {
	int count = countbook();

	system("cls");
	cout << "Enter Book Information" << endl;
	cout << "Accession Number: ";
	cin >> booklib[count].accessionNumber;
	cin.ignore();
	cout << "Book Name: ";
	getline(cin, booklib[count].BookTitle);
	cout << "Author: ";
	getline(cin, booklib[count].BookAuthor);
	cout << "Price: ";
	cin >> booklib[count].price;
	cout << "Status: ";
	cin >> booklib[count].flag;

}

void displaybook() {
	int acc;

	system("cls");
	
	cout << "Book Information" << endl;
	cout << "Enter Accession Number: ";
	cin >> acc;
	cout << endl << endl;

	for (int i = 0; i < countbook(); i++) {
		if (booklib[i].accessionNumber == acc) {
			cout << "Book Name: " << booklib[i].BookTitle << endl;
			cout << "Book Author: " << booklib[i].BookAuthor << endl;
			cout << "Book Price: " << booklib[i].price << endl;
			if (booklib[i].flag == 1) {
				cout << "Book Status: Issued" << endl;
			}
			else {
				cout << "Book Status: Not Issued" << endl;
			}
		}
		else {
			cout << "Book Not Found";
			break;
		}
	}
}

void bookauthor() {
	string author;
	bool found = false;

	system("cls");

	cout << "Book Information" << endl;
	cin.ignore();
	cout << "Enter Author: ";
	getline(cin, author);
	cout << endl << endl;

	for (int i = 0; i < countbook(); i++) {
		if (booklib[i].BookAuthor == author) {
			cout << "Accession Number: " << booklib[i].accessionNumber << endl;
			cout << "Book Name: " << booklib[i].BookTitle << endl;
			cout << "Book Author: " << booklib[i].BookAuthor << endl;
			cout << "Book Price: " << booklib[i].price << endl;
			if (booklib[i].flag == 1) {
				cout << "Book Status: Issued" << endl;
			}
			else {
				cout << "Book Status: Not Issued" << endl;
			}
			found = true;
		}
		cout << endl;
	}

	if (!found) {
		cout << "Book not Found";
	}
}

int countbook() {
	int i = 0;
	while (booklib[i].accessionNumber)
		i++;
	return i;
}

void listacc() {
	string book;
	bool found = false;

	system("cls");

	cout << "Book Information" << endl;
	cin.ignore();
	cout << "Enter Book Title: ";
	getline(cin, book);
	cout << endl << endl;

	for (int i = 0; i < countbook(); i++) {
		if (booklib[i].BookTitle == book) {
			cout << "Accession Number: " << booklib[i].accessionNumber << endl;
			cout << "Book Name: " << booklib[i].BookTitle << endl;
			cout << "Book Author: " << booklib[i].BookAuthor << endl;
			cout << "Book Price: " << booklib[i].price << endl;
			if (booklib[i].flag == 1) {
				cout << "Book Status: Issued" << endl;
			}
			else {
				cout << "Book Status: Not Issued" << endl;
			}
			found = true;
		}
		cout << endl;
	}

	if (!found) {
		cout << "Book not Found";
	}
}

void assacc() {
	system("cls");
	int temp;

	/*for (int i = 0; i < countbook()-1; i++) {
		for (int j = 0; j < countbook(); j++) {
			if (booklib[i].accessionNumber > booklib[j+1].accessionNumber) {
				temp = booklib[i].accessionNumber;
				booklib[i].accessionNumber = booklib[j + 1].accessionNumber;
				booklib[j + 1].accessionNumber = temp;
			}
		}
	}*/

	for (int i = 0; i < countbook(); i++) {
		cout << "Accession Number: " << booklib[i].accessionNumber << endl;
		cout << "Book Name: " << booklib[i].BookTitle << endl;
		cout << "Book Author: " << booklib[i].BookAuthor << endl;
		cout << "Book Price: " << booklib[i].price << endl;
		if (booklib[i].flag == 1) {
			cout << "Book Status: Issued" << endl;
		}
		else {
			cout << "Book Status: Not Issued" << endl;
		}
		cout << endl;
	}
}
