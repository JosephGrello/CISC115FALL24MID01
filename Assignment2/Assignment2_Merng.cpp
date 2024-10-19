#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    string title, author;
    double price;

    // collect book information
    cout << "Enter book title: ";      
    getline(cin, title);

    cout << "Enter author's name: ";    
    getline(cin, author);

    cout << "Enter book price: $";      
    // validate the input for price
    if ( !(cin >> price) ) {  
        cin.clear();    // clear the error flag on cin
        cin.ignore(100, '\n');  // ignore the rest of the input
        cout << "Invalid input. Please enter the correct data type.";
    }
    else {
        // display book information
        cout << "\n----- Book Details -----" << endl;
        cout << fixed << setprecision(2);   // set precision to 2 decimal places for price
        cout << left << setw(15) << "Title: " << title << "\n"
             << left << setw(15) << "Author: " << author << "\n"
             << left << setw(15) << "Price: " << "$" << price;
    }

    return 0;
}