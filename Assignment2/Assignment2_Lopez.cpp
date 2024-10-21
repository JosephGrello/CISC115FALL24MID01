#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    string title = "48 Laws of power";
    string author = "Robert greene";
    double price = 19.99;
//Standard book details for this programs selected title
    std::cout << "----- Book Details -----" << endl;
    std::cout << setw(10) << left << "Title: " << title << endl;
    std::cout << setw(10) << left << "Author: " << author << endl;
    std::cout << setw(10) << left << "Price: $" << fixed << setprecision(2) << price << endl;
//Start of entering the users book
    std::cout << "\n Enter your book information: " << endl;
    
    std::cout << "Enter book title: " ;
    getline(cin, title);

    std::cout << "Enter author's name: ";
    getline(cin, author);

    std::cout << "Enter book price: $";
    while (!(cin >> price)) {
        cin.clear ();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Please enter a valid price: $";
    }
    std::cout << "\n----- Your book Details -----" << endl;
    std::cout << setw(15) << left << "Title of book: " << title << endl;
    std::cout << setw(15) << left << "Author: " << author << endl;
    std::cout << setw(15) << left << "Price: $" << fixed << setprecision(2) << price << endl;
    return 0;

    }