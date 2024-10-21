#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Variables to store book information
    string bookTitle, authorName;
    double bookPrice;

    // Prompt user to enter title of the book
    cout << "Enter the book title (press Enter to finish): ";

    char currentChar;
    // Build title character by character
    while (true) {
        currentChar = cin.get();                                                                                     // Get each character one at a time
        if (currentChar == '\n') break;                                                                              // Stop when uset hits Enter

    // Ignore trailing space before Enter
        if (currentChar == ' ' && cin.peek() == '\n') {
            cout << "Trailing spaces ignored, please continue." << endl;
            continue;
        }

        bookTitle += currentChar;                                                                                    // Add each character to the book title string
    }

    // NGet author's name (simple string input w/ spaces allowed)
    cout << "Enter the author's name: ";
    getline(cin, authorName);                                                                                        // getline allows spaces, no special handling needed here

    // Get and validate price
    while (true) {
        cout << "Enter the price of the book (numbers only): ";
        cin >> bookPrice;

    // Check if the input is valid number
        if (cin.fail()) {
            cin.clear();                                                                                             // Clear error state
            cin.ignore(10000, '\n');                                                                                 // Discard invalid input
            cout << "Please enter a valid numeric price!" << endl;
        }
        else {
    // Check if any invalid characters remain after number
            if (cin.peek() != '\n') {
                cin.clear();
                cin.ignore(10000, '\n');                                                                             // Discard remainder of the invalid input
                cout << "Oops! Looks like there was something extra after the number. Try again." << endl;
            }
            else {
                cin.ignore();                                                                                        // Move past newline character after valid input
                break;                                                                                               // Break out of loop when valid price attained
            }
        }
    }

     // Displaying collected information in a clean format
    cout << "\n--- Book Information ---\n";
    cout << left << setw(15) << "Title:" << bookTitle << endl;
    cout << left << setw(15) << "Author:" << authorName << endl;
    cout << left << setw(15) << "Price:" << "$" << fixed << setprecision(2) << bookPrice << endl;

    return 0;  // End of program
}