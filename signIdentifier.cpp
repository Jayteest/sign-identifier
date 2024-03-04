/*
 Jacob St Lawrence
 This program prompts the user for a number, determines whether the number is
 positive, negative, or zero, then displays the result to the user.
*/

#include <iostream>

using namespace std;

int main()  //begin main
{
    double num; //declare variable to be used
    
    cout << "Please enter a number: ";  //prompt user for input
    cin >> num; //reads input and assigns to num variable
    
    if (num > 0)    //determines if number is positive
        cout << num << " is a positive number.\n";  //displays result if number is positive
    
    else if (num < 0)   //determines if number is negative
        cout << num << " is a negative number.\n";  //displays result if number is negative
    
    else if (num == 0)  //determines if number is zero
        cout << num << " is zero; it is not positive or negative.\n";   //displays result if number is zero
  
    return 0;
}
