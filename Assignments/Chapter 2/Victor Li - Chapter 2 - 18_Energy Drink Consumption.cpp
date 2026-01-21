/*
  Victor Li
  Chapter 2: Energy Drink Consumption
  This program calculates and outputs the number of customers that purchase 1 or mroe energy drinks and those who prefer citrus flavored energy drinks
*/

#include <iostream>

using namespace std;

int main()
{
  double customers = 16500, plusDrinks = 0.15, citrus = 0.58, energyCustomers;

  energyCustomers = customers * plusDrinks;

  cout << "The number of customers that purchase one or more energy drinks per week is " << energyCustomers << "." << endl;

  energyCustomers = energyCustomers * citrus;

  cout << "The number of customers that prefer citrus flavored energy drinks is " << energyCustomers << "." << endl;
  
  return 0;
}
