/*
  Victor Li
  Chapter 2: Sales Prediction
  This program calculates and outputs the profit based on the total sales percentage and money generated from sales
*/

#include <iostream>

using namespace std;

int main()
{
  double sales = 8600000.0, salesPercent = 0.58, profit;

// This calculates the profit by multiplying the sales generated this year with the percentage of total sales
  profit = sales * salesPercent;

  cout << "The East Coast Division will generate $" << profit << " if the company has made $" << sales << " in sales this year.\n";
  
  return 0; 
}
