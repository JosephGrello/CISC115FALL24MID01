#include<iostream>
#include<string>
using namespace std;
int main()
{
//Declaring variables
int age;
double newage;
float height;
double newheight;
char grade;
string name;

//Assign values
age = 18;
height = 5.8;
grade = 'A';
name = "Kaung Myat Thu";

//Perform basic operations
newage = age + 10;
newheight = int(height);

cout <<"My name is: "<< name <<endl;
cout <<"This is my first basic program in C++!" <<endl;
cout <<"Age: " << age <<endl;
cout <<"Height: " << height <<endl;
cout <<"I want Grade in CISC115: " << grade << endl;
cout <<"New Age (double): " << newage <<endl;
cout <<"Rounded Height (int): " <<newheight <<endl;

return 0;
}
