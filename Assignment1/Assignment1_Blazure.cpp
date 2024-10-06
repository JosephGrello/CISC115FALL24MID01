#include<iostream>
using namespace std;

int main()
{
    int age;
    double height;
    char grade;
//The assigned values for each variable
    age = 19;
    height = 6.3;
    grade = 'A';
//Basic function
    age = age + 21; //My age after 21 years
    height = height - 1; //My height after subtracting 1 foot

    double heightinDouble = static_cast<double>(height);
//The outputs I desire
    cout << "Age after 21 years" << age << "years" << endl;
    cout << "Height after subtracting 1 foot" << height << "foot" << endl;
    cout << "Grade that I'm hoping to get" << grade << "get" << endl;

    return 0;
}