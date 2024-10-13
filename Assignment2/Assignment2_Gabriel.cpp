#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){


string title= "A Tree Grows in Brooklyn";
string author= "Berry Smith";
double price= 15.99;

//This is predefined information that shows the user how their inputs will appear.
cout << "-----Predefined Book Information-----" <<endl;
cout << setw(10) << "Book Title: " << title <<endl;
cout << setw(6) << "Author: " << author <<endl;
cout << setw(7) << "Price: $" << price <<endl;

cout << fixed << setprecision(2) <<endl;

//This is where the user will input their own data into the program.
cout << "-----User's Information Input-----" <<endl;
cout << "Enter Book Title: ";
getline(cin, title);

cout << "Enter Author: ";
getline(cin, author);

cout << "Enter Price: $";
while (!(cin >> price)) {
cin.clear();
cin.ignore(1000, '\n');
cout << "Invalid Input! Please input information properly." <<endl;
}
cout <<endl;


//This is the part of the program where the user's inputs are relayed back to them.
cout << "-----Book Details-----" <<endl;
cout << "Book Title: " << title <<endl;
cout << "Book Author: " << author <<endl;
cout << "Book Price: $" << price <<endl;



return 0;
}
