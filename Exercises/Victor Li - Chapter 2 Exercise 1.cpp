/*  
    Victor Li 
    Chapter 2: Exercise 1
    This program assigns and outputs the company name, hours worked, rate per hour, and gross pay variables
*/ 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int hoursWorked = 40, rateHour = 100, grossPay;
    string companyName = "De Anza College";

// This determines the gross pay based on the hours worked and rate per hour
    grossPay = hoursWorked * rateHour;
    
    cout << "Company Name is: " << companyName << endl;
    cout << "Hours Worked: " << hoursWorked << " hours" << endl;
    cout << "Rate per Hour: " << rateHour << " dollars per hour" << endl;
    cout << "Your De Anza College gross pay is: " << grossPay << " dollars" << endl;
    
    return 0;
}
