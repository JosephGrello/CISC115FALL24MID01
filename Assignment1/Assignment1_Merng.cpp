// header file
#include <iostream>

using namespace std;

int main() 
{
    // declare variables
    int age, newHeight;
    float height, newAge;
    char grade;
    string name;
    
    // assign values
    age = 15;
    height = 5.8;
    grade = 'A';
    name = "Sumanth";

    // perform basic operations
    age = age + 10;     // add 10 years to age

    // type conversion 
    newAge = age;               // implicit casting - assign/ convert int into float     
    newHeight = (int)height;    // explicit casting - convert float into int
    // [OR] static_cast<float>(intVar);

    // output results
    cout << "My name is : " << name << endl;
    cout << "This is my first basic program in C++" << endl;
    cout << "Age: " << age << endl;                         // age after adding 10
    cout << "Height: " << height << endl;                   // original float height
    cout << "I want Grade in CISC115: " << grade << endl;
    cout << "New Age (float): " << newAge << endl;          // age implicitly cast to float
    cout << "Rounded Height (int): " << newHeight << endl;  // height explicitly cast to int

    return 0;
}