/*
  Victor Li
  Chapter 3: Exercise 3
  
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  const double tax = 0.12;
  const int maxDocument = 9999;
  double hours, rate, grossPay, taxAmount, netPay;
  int avgPayHour;
  string name;

  cout << "Enter your College or Company name:\n";    
  getline(cin, name);
  cout << "Enter the number of hours worked:\n";
  cin >> hours;
  cout << "Enter the hourly pay rate:\n";
  cin >> rate;

  grossPay = hours * rate;
  taxAmount = grossPay * tax;
  netPay = grossPay - taxAmount;
  avgPayHour = grossPay / static_cast<double>(hours);

  cout << "\nInformation Summary\n";
  cout << "-------------------\n";
  cout << "Company Name: " << name << endl;
  cout << "Hours Worked: " << hours << endl;
  cout << "Hourly Pay Rate: " << rate << endl;
  cout << "Gross Pay: " << fixed << setprecision(2) << grossPay << endl;
  cout << "Tax Amount: " << taxAmount << endl;
  cout << "Total Pay: " << netPay << endl;
  cout << "Average Pay Per Hour: " << avgPayHour << endl;

  return 0;
}
