/*
  Victor Li
  Chapter 4: Exercise 1
  This program provides an formatted report of: 
  Company Name, Hours Worked, Hourly Pay Rate, Overtime Pay Rate, Document Number, Gross Pay, and Average Hourly Pay
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
  unsigned int seedValue;
  double hours, hourlyRate, grossPay, avgPayHour, overtimeRate;
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
// If there is overtime pay, this calculates the remainder of hours / 40 so that overtimeHours has the overtime hours and hours has only the max 40 hours
    overtimeHours = hours % 40;
    hours = hours - overtimeHours;
// This calculates the gross pay by multiplying the rates with each overtime and regular hours and getting the sum of both 
    grossPay = (hourlyRate * hours) + (overtimeRate * overtimeHours);
  }
  else {
// If there is no overtime pay, this multiplies the hours worked by the hourly pay rate to get the gross pay
  grossPay = hours * hourlyRate;
  }

// This divides the gross pay by the hours worked to get the average pay per hour
// The hours worked is changed to a double variable type using static_cast
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
  cout << "Overtime Pay Rate: $" << overtimeRate << endl;
  cout << "Document Number: #" << documentNumber << endl;
  cout << "Gross Pay: $" << grossPay << endl;
  cout << "Average Hourly Pay (Calculated using type casting): $" << avgPayHour << endl;

  return 0;
}
