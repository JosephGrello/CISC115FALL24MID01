#include <iostream>
#include <iomanip> //Used for input and output manipulators

using namespace std;

int main () 
{      
    //The first step is to set up the variables
    std::string bookTitle;
    std::string authorName; 
    double bookPrice;

    //The second step is to set up and get the user input using getline and cout 
    cout << "Enter Book Title: ";
    getline (cin, bookTitle);   
    cout << endl;

    cout << "Enter Author's Name: ";
    getline (cin, authorName);
    cout << endl;

    //The third step is to set up a fixed decimal value for the price output
    cout << fixed << showpoint << setprecision(2);

    cout << "Enter Book Price: ";
    cin >> bookPrice;
    cout << endl;

    // The final step is to print the book details "setw" is used to add spaces between strings
    cout << "----- Book Details -----" << '\n';
    cout << "Title: " << setw(4) << bookTitle << '\n' << '\n';
    cout << "Author: " << setw(3) << authorName << '\n' << '\n';
    cout << "Price: $" << setw(2) << bookPrice << endl << endl;

    return 0;
}