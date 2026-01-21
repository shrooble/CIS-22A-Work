/*
  Victor Li
  Chapter 3: Exercise 1
  This program calculates and outputs the gross pay based on the hours worked and the hourly pay rate
*/

#include <iostream>

using namespace std;

int main()
{
    double hoursWorked, hourlyRate, grossPay;
    
    cout << "Enter the amount of hours worked and the hourly pay rate\n";
    cout << "Each should be separated by a space with no special $ characters.\n";
    
    cin >> hoursWorked >> hourlyRate;
  
// This finds the gross pay by multiplying the hours worked by the hourly pay rate
    grossPay = hoursWorked * hourlyRate;
    
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Hourly Pay Rate: " << hourlyRate << endl;
    cout << "Gross Pay: " << grossPay << endl;
    
    return 0;
}

/*
Sample Output 1:
    Enter the amount of hours worked and the hourly pay rate
    Each should be separated by a space with no special $ characters.
    60 50.5
    Hours Worked: 60
    Hourly Pay Rate: 50.5
    Gross Pay: 3030
    
Sample Output 2:
    Enter the amount of hours worked and the hourly pay rate
    Each should be separated by a space with no special $ characters.
    20
    17.95
    Hours Worked: 20
    Hourly Pay Rate: 17.95
    Gross Pay: 359
*/
