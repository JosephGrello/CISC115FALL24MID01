#include<iostream>
#include <string>  // Include string for string type
using namespace std;

int main() {
    // Declaring Vairables
    int age;            // Integer for age
    float height;       // Float variable fr height 
    char grade;         // Char variable for grade
    double weight;      // Double Vairable for weight
    string fullname;    // String variable for full name

    // Assigning Values to to the variables
    age = 28;           
    height = 5.8f;
    grade = 'A';
    weight = 97.8;
    fullname = "Cristian Lebron";

    //Increase height by 0.3 feet
    height = height + 0.3f;  // Adding 0.3 feet to height 
    
    //Add 10 years to age
    age = age +10;      //Adding 10 years to age

    // Casting Int to double using static_cast
    double ageInDouble = static_cast<double>(age); // Conversion from int to double
   
    //Output
    cout << "My name is: "<< fullname << endl;
    cout << "This is my very first C++ program" << endl;
    cout << "Age after adding 10 years: " << age << " years" << endl;
    cout << "Height: " << height << " feet" << endl; 
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl; 
    cout << "Age (Int) to double: " << ageInDouble << endl; // Result of casting

    return 0;
}
