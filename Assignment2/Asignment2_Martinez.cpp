#include <iostream>
#include <iomanip> // iomanip should be included to use the functions on line 12.
using namespace std;
int main(){
// Step 1 should be to set up varibales to store your inputs so the terminal can send back a output to the user. Here our varibales should be the book nmae, author name, and price. these should be represented as strings and a double.
std::string BookName;
std::string AuthorName;
double BookPrice;


// getline allows for user input of multiple words rather than using "cin" because cin doesn't read whitespaces. For example "My name" would not be rcognized in cin and would only read "My" when being ran and mistankenly "name" would go to the next cin function.
// Overall, use getline when using a string with more then one word.
cout << "Enter Book Name: ";
getline (cin, BookName);
cout << endl;

cout << "Enter Author's Name: ";
getline (cin, AuthorName);
cout << endl;

cout << fixed << showpoint << setprecision(2);
// This is used to set a fixed decimal value on number outputs, more so for your uses of doubles and floats "()" represents the number of zeros I want behind the decimal.

cout << "Enter Book Price: ";
cin >> BookPrice;
cout << endl;


cout << "----Book Details----" << '\n';
cout << "Title: " << setw(4) << BookName << '\n' << '\n';
cout << "Author: " << setw(3) << AuthorName << '\n' << '\n';
cout << "Price: $" << setw(2) << BookPrice << endl << endl;                              
//Use of the setw manipulator is just to add spaces between strings.


cout << "How many copies: ";
int number;
cin >> number;

if  (number != 0, 100) //Utilized if statment.
{
    cout << "Re-type the value to confirm. How many copies: "; // here is a input validation but some bugs are noticed when a letter is typed and need help resolving that.
    cin >> number;
    cin.ignore(100,'\n');
    cin.clear();
}
else
 cout << "Are you sure you want " << number << " ?" << endl; 


cout << "Enter Y for yes, and N for no: ";
string answer;
cin >> answer;

while (answer != "Y" && answer != "N" ) //Utilized while statement.
{
    cout << "INVALID ANSWER TRY AGAIN!" << endl << endl; // here is a better input validation program that will only accept "Y" or "N" to exit the loop. Still want to know why my other program before this one didn't work as expected. 
    cout << "ENTER Y for yes or N for no.";
    cin >> answer;
    cin.clear();
    cin.ignore(100,'\n');
}

return 0; 
}
