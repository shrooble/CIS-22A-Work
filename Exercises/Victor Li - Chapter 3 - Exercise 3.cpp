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
  int hours, rate, grossPay, ;
  string name;

  cout << "Enter your College or Company name\n";    
  getline(cin, name);
  cout << "Enter the number of hours worked\n";
  cin << hours;
  cout << "Enter the hourly pay rate\n";
  cin << rate;

  grossPay = hours * rate;
  
  

  cout << "" << fixed << setprecision(2);
  

  return 0;
}
