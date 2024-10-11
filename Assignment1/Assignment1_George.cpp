#include <string>
#include <iostream>
using namespace std;
int main()
{
    
     
    float exact_quarter_one = 1645.54 ; //decalring and assining my float variable 
    string company = "Generaic computer company"; //decalring and assining my character variable 
    double previous_profit = 168466  ; //decalring and assining my double variable 
    char company_logo = 'G'; //declaring my char vaule 
    int quarter_One = 7628; // decaling my quarter one int to be used later
    
    
    
    cout<< company_logo << "\n";
    cout<< company << "\n"; //outputing company name and moving to a new line 
    cout<< "Profit for this quarter is ";
    cout<< exact_quarter_one << "\n"; // outputing my intger vaule and moving to another line 
    cout<< "The rounded vaule is of this quarter is ";
    
    int rounded_vaule = exact_quarter_one;//decalring my intger vaule and casting my float as an intger
    cout<< rounded_vaule << "\n"; //outputing my rounded vaule and moving to a new line 
    
    cout<< "Finally overall profit is ";
    cout<< previous_profit + rounded_vaule + quarter_One;// adding and outputing all of my intger vaules and my double vaule together 
}