/*
  Victor Li
  Chapter 2: Sales Tax
  This program calculates and outputs the total sales tax on a purchase based on state and county sales tax
*/

#include <iostream>

using namespace std;

int main()
{
  double purchase = 95.0, stateTax = 0.04, countyTax = 0.02, totalTax;

// This finds the total tax of the purchase by adding the state and county taxes before multiplying them with the purchase amount
  totalTax = purchase * (stateTax + countyTax);

  cout << "The total sales tax on a $" << purchase << " purchase is: $" << totalTax << endl;

  return 0;
}
