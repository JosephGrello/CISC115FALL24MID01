#include <iostream>
#include <string>
using namespace std;
int main ()
{
//variable declarations
int age;
int newage;
float height;
int newheight;
char grade;
string name;


// assinging values to variables
age = 27;
height = 5.8;
//convert height into an integer with explicit type casting
newheight = static_cast<int>(height);
grade = 'A';
name = "Isaac Zehr";

//basic operation
newage = age + 5;

//outputting to console

cout <<"My name is : " << name << endl;
cout <<"My desired grade in this class is : " << grade << endl;
cout <<"My height is : " << height << endl;
cout <<"My height without decimals is : " << newheight << endl;
cout <<"My age in 5 years will be : " << newage << endl;



    return 0;
}