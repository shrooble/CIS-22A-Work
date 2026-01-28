/*
  Victor Li
  Chapter 3: Exercise 3
  This program provides an formatted report of: 
  Company Name, Hours Worked, Hourly Pay Rate, Document Number, Gross Pay, Tax Amount, Total Pay, and Average Hourly Pay
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main()
{
  const double tax = 0.12;
  const int documentMin = 1000, documentMax = 2000;
  unsigned int seedValue;
  double hourlyRate, grossPay, taxAmount, netPay, avgPayHour;
  int documentNumber, hours;
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
// The hours worked is changed to a double variable type using static_cast<double>
  avgPayHour = grossPay / static_cast<double>(hours);

// This generates a unique seed using "seedValue = time(0);" and "srand(seedValue);"
  seedValue = time(0);
  srand(seedValue);

// This generates a random document number from 1000 to 2000
  documentNumber = ((rand() % (documentMax - documentMin + 1)) + documentMin);

  cout << "\nInformation Summary\n";
  cout << "-------------------\n";
  cout << "Company Name: " << name << endl;
  cout << "Hours Worked: " << hours << " hours" << endl;
  cout << "Hourly Pay Rate: $" << fixed << setprecision(2) << showpoint << hourlyRate << endl;
  cout << "Document Number: #" << documentNumber << endl;
  cout << "Gross Pay: $" << grossPay << endl;
  cout << "Tax Amount: $" << taxAmount << endl;
  cout << "Total Pay: $" << netPay << endl;
  cout << "Average Hourly Pay (Calculated using type casting): $" << avgPayHour << endl;

  return 0;
}

/*
Sample Output #1:
  Enter your College or Company name:
  De Anza College
  Enter the number of hours worked:
  40
  Enter the hourly pay rate:
  9
  
  Information Summary
  -------------------
  Company Name: De Anza College
  Hours Worked: 40 hours
  Hourly Pay Rate: $9.00
  Document Number: #1166
  Gross Pay: $360.00
  Tax Amount: $43.20
  Total Pay: $316.80
  Average Hourly Pay (Calculated using type casting): $9.00

Sample Output #2:
  Enter your College or Company name:
  SJSU
  Enter the number of hours worked:
  41
  Enter the hourly pay rate:
  17.50
  
  Information Summary
  -------------------
  Company Name: SJSU
  Hours Worked: 41 hours
  Hourly Pay Rate: $17.50
  Document Number: #1024
  Gross Pay: $717.50
  Tax Amount: $86.10
  Total Pay: $631.40
  Average Hourly Pay (Calculated using type casting): $17.50
*/

