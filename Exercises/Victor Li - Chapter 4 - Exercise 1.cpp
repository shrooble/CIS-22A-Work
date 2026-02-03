/*
  Victor Li
  Chapter 4: Exercise 1
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
  double hours, hourlyRate, grossPay, avgPayHour, overtimeRate, newHours;
  int documentNumber, overtimeHours;
  string name;

  cout << "Enter your College or Company name:\n";    
  getline(cin, name);
  cout << "Enter the number of hours worked:\n";
  cin >> hours;
  cout << "Enter the hourly pay rate:\n";
  cin >> hourlyRate;

// This calculates the overtime pay based on the user's regular hourly pay rate
  overtimeRate = hourlyRate * 1.5;

  if (hours > 40) {
// If there is overtime pay, this calculates the hours - 40 so that overtimeHours has the overtime hours and hours has only the max 40 hours
    overtimeHours = hours - 40;
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

// This generates the document number randomly from 1000 to 2000, after getting a unique seed "using srand(seedValue);"
  seedValue = time(0);
  srand(seedValue);
  documentNumber = ((rand() % 1001) + 1000);

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
  De Anza
  Enter the number of hours worked:
  38
  Enter the hourly pay rate:
  10
  
  Information Summary
  -------------------
  Company Name: De Anza
  Hours Worked: 38 hours
  Hourly Pay Rate: $10.00
  Potential Overtime Pay Rate: $15.00
  Document Number: #1606
  Gross Pay: $380.00
  Average Hourly Pay: $10.00

Sample Output #2:
  Enter your College or Company name:
  Google
  Enter the number of hours worked:
  50
  Enter the hourly pay rate:
  17
  
  Information Summary
  -------------------
  Company Name: Google
  Hours Worked: 50 hours
  Hourly Pay Rate: $17.00
  Potential Overtime Pay Rate: $25.50
  Document Number: #1246
  Gross Pay: $935.00
  Average Hourly Pay: $18.70
*/
