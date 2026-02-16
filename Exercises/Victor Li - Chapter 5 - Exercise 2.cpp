/*
  Victor Li
  Chapter 5: Exercise 2
  This program provides an formatted report to the console and a file including: 
  Company Name, Hours Worked, Hourly Pay Rate, Potential Overtime Pay Rate, Document Number, Gross Pay, and Average Hourly Pay
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>

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
// This loops until the user inputs a valid amount of hours (more than or equal to 0)
  while (hours < 0) {
    cout << "Invalid Input - ";
    cout << "Enter the number of hours worked:\n";
    cin >> hours;  
  }
  
  cout << "Enter the hourly pay rate:\n";
  cin >> hourlyRate;
// This loops until the user inputs a valid hourly rate (more than 0)
  while (hourlyRate <= 0) {
    cout << "Invalid Input - ";
    cout << "Enter the hourly pay rate:\n";
    cin >> hourlyRate;  
  }
  
  cout << "Enter the amount of regular hours before overtime starts:\n";
  cin >> regularHours;
  cout << "Enter the overtime multiplier:\n";
  cin >> overtimeMultiplier;
  cout << "Enter the minimum and maximum document number, separated by a space:\n";
  cin >> docMin >> docMax;

// This calculates the overtime pay based on the user's regular hourly pay rate and the overtime multiplier
  overtimeRate = hourlyRate * overtimeMultiplier;

// If there is overtime pay, this calculates the hours - regularHours so that overtimeHours has the overtime hours and hours has only the max "regularHours" hours
  if (hours > regularHours) {
    overtimeHours = hours - regularHours;
    newHours = hours - overtimeHours;
// This also calculates the gross pay by multiplying the rates with each overtime and regular hours and getting the sum of both 
    grossPay = (hourlyRate * newHours) + (overtimeRate * overtimeHours);
  }
// If there is no overtime pay, this multiplies the hours worked by the hourly pay rate to get the gross pay
  else {
    grossPay = hours * hourlyRate;
  }

// This checks if the hours input is 0
  if (hours != 0) {
  // This divides the gross pay by the hours worked to get the average pay per hour
    avgPayHour = grossPay / hours;
  }
  else {
  // If hours == 0, then the average pay per hour is 0
    avgPayHour = 0;
  }
  
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

  ofstream outFile("Pay_Report.txt");
  
  outFile << "\nInformation Summary\n";
  outFile << "-------------------\n";
  outFile << "Company Name: " << name << endl;
  outFile << "Hours Worked: " << hours << " hours" << endl;
  outFile << "Hourly Pay Rate: $" << fixed << setprecision(2) << showpoint << hourlyRate << endl;
  outFile << "Potential Overtime Pay Rate: $" << overtimeRate << endl;
  outFile << "Document Number: #" << documentNumber << endl;
  outFile << "Gross Pay: $" << grossPay << endl;
  outFile << "Average Hourly Pay: $" << avgPayHour << endl;

  outFile.close();

  return 0;
}

/*
Sample Output #1:
  
Sample Output #2:

*/  
