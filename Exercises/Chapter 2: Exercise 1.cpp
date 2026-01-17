/*  
    Victor Li 
    Chapter 2: Exercise 1
*/ 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int hoursWorked = 40, rateHour = 100, grossPay;
    string companyName = "De Anza College";

// This determines the grossPay based on the hoursWorked and rateHour
    grossPay = hoursWorked * rateHour;
    
    cout << "Company Name is: " << companyName << endl;
    cout << "Hours Worked: " << hoursWorked << " hours" << endl;
    cout << "Rate per Hour: " << rateHour << " dollars per hour" << endl;
    cout << "Your De Anza College gross pay is: " << grossPay << " dollars" << endl;
    
    return 0;
}
