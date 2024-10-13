#include <iostream>
#include <iomanip>

using namespace std;

int main () {      
// Step one is to set up your variables
std::string bookTitle;
std::string authorName; 
double bookPrice;

// Step two set up and get the user input using getline and cout 
cout << "Enter Book Title: ";
getline (cin, bookTitle);   
cout << endl;

cout << "Enter Author's Name: ";
getline (cin, authorName);
cout << endl;

// Step three set up a fixed decimal value for the price output
cout << fixed << showpoint << setprecision(2);

cout << "Enter Book Price: ";
cin >> bookPrice;
cout << endl;

// Step four Print the book details "setw" is used to add spaces between strings
cout << "----- Book Details -----" << '\n';
cout << "Title: " << setw(4) << bookTitle << '\n' << '\n';
cout << "Author: " << setw(3) << authorName << '\n' << '\n';
cout << "Price: $" << setw(2) << bookPrice << endl << endl;

return 0;
}