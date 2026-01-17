/*
  Victor Li
  Chapter 2: Sales Prediction
  This program assigns the sales and percentage variables, stores the product of both in the totalSales variable, and outputs the total sales percentage to the console
*/

#include <iostream>

using namespace std;

int main()
{
  double sales = 8600000, salesPercent = 0.58, totalSales;

// This calculates the percentage of the incoming sales
  totalSales = sales * salesPercent;

  cout << "The East Coast Division will generate " << totalSales << " if the company has $8.6 million sales this year." << endl;
  
  return 0; 
}
