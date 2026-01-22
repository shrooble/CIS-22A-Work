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
  string name;

  cout << "Enter your College or Company name:\n";    
  getline(cin, name);
  cout << "Enter the number of hours worked:\n";
  cin >> hours;
  cout << "Enter the hourly pay rate:\n";
  cin >> rate;

  grossPay = hours * rate;
  taxAmount = grossPay * tax;
  netPay = grossPay + taxAmount;

  cout << "Information Summary\n";
  cout << "-------------------\n";
  cout << "Company Name: " << name << endl;
  cout << "" << fixed << setprecision(2);
  

  return 0;
}
