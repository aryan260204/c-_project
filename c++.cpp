#include <iostream>
#include <string>
using namespace std;
class Book {
public:
 string title;
 string author;
 int year;
 void displayInfo() {
 cout << "Title: " << title << endl;
 cout << "Author: " << author << endl;
 cout << "Year: " << year << endl;
 }
};
int main() {
 const int maxBooks = 10;
 Book library[maxBooks];
 int numBooks = 0;
 while (true) {
 cout << "Library Management System" << endl;
 cout << "1. Add a book" << endl;
 cout << "2. Display all books" << endl;
 cout << "3. Exit" << endl;
 int choice;
 cin >> choice;
 switch (choice) {
 case 1:
 if (numBooks < maxBooks) {
 cout << "Enter title: ";
 cin.ignore();
 getline(cin, library[numBooks].title);
 cout << "Enter author: ";
 getline(cin, library[numBooks].author);
 cout << "Enter year: ";
 cin >> library[numBooks].year;
 numBooks++;
 } else {
 cout << "Library is full." << endl;
 }
 
Sanjay Ghodawat University, Kolhapur 13 SY BTech, SOCSE
 break;
 case 2:
 cout << "Books in the library:" << endl;
 for (int i = 0; i < numBooks; i++) {
 cout << "Book " << (i + 1) << ":" << endl;
 library[i].displayInfo();
 }
 break;
 case 3:
 cout << "Exiting the program." << endl;
 return 0;
 default:
 cout << "Invalid choice. Please enter a valid option." << endl;
 }
 }
 return 0;
}