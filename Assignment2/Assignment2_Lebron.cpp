#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() {

    // String used to store boook information
    string title = "The Grapes of Wrath";
    string author = "John Steinbeck";
    double price;

    // Collecting book information from the user
    cout << "Enter the title of the book: ";
    getline(cin, title);    // Getline used to read the book's title and author's name, allowing inputs with spaces.

    cout << "Enter the author's name: ";
    getline(cin, author);    // Getline used to read the book's title and author's name, allowing inputs with spaces.

    // Input validation for price
    cout << "Enter the price of the book: ";
    while (true) {
        if (cin >> price && price >= 0) {
            // Valid price entered, exit the loop
            break;
        } else {
            // Clear error state and ignore invalid input
            cout << "Invalid input. Please enter a positive numeric value for the price: ";
            cin.clear();
            cin.ignore(1000, '\n'); // Ignore invalid input
        }
    }

    // Displaying the entered book information in a formatted way
    cout << "\nBook Information:\n";
    cout << setw(10) << left << "Title:" << title << endl;
    cout << setw(10) << left << "Author:" << author << endl;
    cout << setw(10) << left << "Price:" << fixed << setprecision(2) << "$" << price << endl;

    // Demonstrate usage of input stream functions: get(), putback(), and peek()
    cin.ignore(); // To ignore any remaining newline character in the buffer.
    cout << "\nEnter X to continue: ";
    char ch = cin.get(); // Read a character
    cin.putback(ch);     // Put the character back into the input stream

    // Use peek() to check the character put back into the stream
    if (cin.peek() == ch) {
        cout << "You entered: " << cin.get() << endl; // Display the character
    } else {
        cout << "Unexpected input." << endl;
    }

    return 0;

}