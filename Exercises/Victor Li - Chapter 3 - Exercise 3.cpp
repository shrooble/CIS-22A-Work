/*
  Victor Li
  Chapter 3: Exercise 3
  This program provides an information summary of: Company Name, Hours Worked, Hourly Pay Rate, Document Number, Gross Pay, Tax Amount, Total Pay, and Average Hourly Pay
  FIX THE RAND() AND THE EXTRA maxDocument VARIABLE
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
  const double tax = 0.12;
  unsigned int seedValue;
  double hours, hourlyRate, grossPay, taxAmount, netPay;
  int avgPayHour, documentNumber;
  string name;

  cout << "Enter your College or Company name:\n";    
  getline(cin, name);
  cout << "Enter the number of hours worked:\n";
  cin >> hours;
  cout << "Enter the hourly pay rate:\n";
  cin >> hourlyRate;

// This multiplies the hours worked by the hourly pay rate to get the gross pay, gross pay is multiplied by the tax to also get the tax amount
  grossPay = hours * hourlyRate;
  taxAmount = grossPay * tax;

// This subtracts gross pay from the tax amount to get the net pay the employee will receive
  netPay = grossPay - taxAmount;

// This divides the gross pay by the hours worked to get the average pay per hour
// The hours worked is changed to a double variable type using static_cast
  avgPayHour = grossPay / static_cast<double>(hours);

// This generates the document number randomly from 1000 to 2000, after getting a unique seed "using srand(seedValue);"
  seedValue = time(0);
  srand(seedValue);
  documentNumber = ((rand() % 1001) + 1000);

  cout << "\nInformation Summary\n";
  cout << "-------------------\n";
  cout << "Company Name: " << name << endl;
  cout << "Hours Worked: " << hours << " hours" << endl;
  cout << "Hourly Pay Rate: $" << hourlyRate << endl;
  cout << "Document Number: #" << documentNumber << endl;
  cout << "Gross Pay: $" << fixed << setprecision(2) << grossPay << endl;
  cout << "Tax Amount: $" << taxAmount << endl;
  cout << "Total Pay: $" << netPay << endl;
  cout << "Average Hourly Pay (Calculated using type casting): $" << avgPayHour << endl;

  return 0;
}
