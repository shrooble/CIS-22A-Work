/*
  Victor Li
  Chapter 2: Annual Pay
  This program calculates the total annual pay based on the amount for each pay period
*/

#include <iostream>

using namespace std;

int main()
{
  double payAmount = 2200.0, payPeriods = 26.0, annualPay;

//This calculates the annual pay by multiplying the pay amount by the pay periods in a year
  annualPay = payAmount * payPeriods;

  cout << "The total annual pay of the employee is: $" << annualPay << endl;

  return 0;
}
