/*
  Victor Li
  Chapter 2: Restaurant Bill
  This program calculates the total bill of a meal after including the tax and tip
*/

#include <iostream>

using namespace std;

int main()
{
  double mealCost = 88.67, taxPercent = 0.0675, tipPercent = 0.20, taxAmount, totalTax, tipAmount, totalBill;

// This calculates the cost of the meal by calculating the amount after tax and adding it to the subtotal to get the amount including tax
  taxAmount = mealCost * taxPercent;
  totalTax = mealCost + taxAmount;
  
// This calculates the tip of the meal and adds it to totalTax to get the total bill of the meal
  tipAmount = totalTax * tipPercent;
  totalBill = tipAmount + totalTax;

  cout << "The subtotal is $" << mealCost << ".\n";
  cout << "The amount after tax is $" << totalTax << ".\n";
  cout << "The total bill after tax and including tip is $" << totalBill << ".\n";

  return 0;
}
