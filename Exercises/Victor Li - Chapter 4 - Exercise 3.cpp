/*
  Victor Li
  Chapter 4: Exercise 3
  This program provides an formatted report of: 
  Company Name, Hours Worked, Hourly Pay Rate, Potential Overtime Pay Rate, Document Number, Gross Pay, and Average Hourly Pay
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
  unsigned int seedValue;
  double hours, hourlyRate, grossPay, avgPayHour, overtimeRate, newHours, overtimeMultiplier;
  int documentNumber, overtimeHours, regularHours, docMin, docMax;
  string name;

  cout << "Enter your College or Company name:\n";    
  getline(cin, name);
  cout << "Enter the number of hours worked:\n";
  cin >> hours;
  cout << "Enter the hourly pay rate:\n";
  cin >> hourlyRate;
  cout << "Enter the amount of regular hours before overtime starts:\n";
  cin >> regularHours;
  cout << "Enter the overtime multiplier:\n";
  cin >> overtimeMultiplier;
  cout << "Enter the minimum and maximum document number, separated by a space:\n";
  cin >> docMin >> docMax;

// This calculates the overtime pay based on the user's regular hourly pay rate and the overtime multiplier
  overtimeRate = hourlyRate * overtimeMultiplier;

  if (hours > regularHours) {
// If there is overtime pay, this calculates the hours - regularHours so that overtimeHours has the overtime hours and hours has only the max "regularHours" hours
    overtimeHours = hours - regularHours;
    newHours = hours - overtimeHours;
// This calculates the gross pay by multiplying the rates with each overtime and regular hours and getting the sum of both 
    grossPay = (hourlyRate * newHours) + (overtimeRate * overtimeHours);
  }
    
  else {
// If there is no overtime pay, this multiplies the hours worked by the hourly pay rate to get the gross pay
    grossPay = hours * hourlyRate;
  }

// This divides the gross pay by the hours worked to get the average pay per hour
  avgPayHour = grossPay / hours;

// This generates the document number randomly from docMin to docMax, after getting a unique seed "using srand(seedValue);"
  seedValue = time(0);
  srand(seedValue);
  documentNumber = ((rand() % (docMax - docMin + 1)) + docMin);

  cout << "\nInformation Summary\n";
  cout << "-------------------\n";
  cout << "Company Name: " << name << endl;
  cout << "Hours Worked: " << hours << " hours" << endl;
  cout << "Hourly Pay Rate: $" << fixed << setprecision(2) << showpoint << hourlyRate << endl;
  cout << "Potential Overtime Pay Rate: $" << overtimeRate << endl;
  cout << "Document Number: #" << documentNumber << endl;
  cout << "Gross Pay: $" << grossPay << endl;
  cout << "Average Hourly Pay: $" << avgPayHour << endl;

  return 0;
}

/*
Sample Output #1:
  Enter your College or Company name:
  SJSU
  Enter the number of hours worked:
  50
  Enter the hourly pay rate:
  10
  Enter the amount of regular hours before overtime starts:
  40
  Enter the overtime multiplier:
  1.1
  Enter the minimum and maximum document number, separated by a space:
  500 1000
  
  Information Summary
  -------------------
  Company Name: SJSU
  Hours Worked: 50 hours
  Hourly Pay Rate: $10.00
  Potential Overtime Pay Rate: $11.00
  Document Number: #622
  Gross Pay: $510.00
  Average Hourly Pay: $10.20
  
Sample Output #2:
  Enter your College or Company name:
  Google
  Enter the number of hours worked:
  10
  Enter the hourly pay rate:
  20
  Enter the amount of regular hours before overtime starts:
  20
  Enter the overtime multiplier:
  5
  Enter the minimum and maximum document number, separated by a space:
  100 200
  
  Information Summary
  -------------------
  Company Name: Google
  Hours Worked: 10 hours
  Hourly Pay Rate: $20.00
  Potential Overtime Pay Rate: $100.00
  Document Number: #119
  Gross Pay: $200.00
  Average Hourly Pay: $20.00
*/  
