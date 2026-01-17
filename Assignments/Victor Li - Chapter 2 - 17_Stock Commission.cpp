/*
  Victor Li
  Chapter 2: Stock Commission
  This program calculates and outputs the amount paid for the stock, the commission on the transaction, and the total amount paid
*/

#include <iostream>

using namespace std;

int main()
{
  double shares = 750, sharePrice = 35.00, commission = 0.02, stockPrice, commissionPrice, totalAmount;

  stockPrice = shares * sharePrice;
  commissionPrice = stockPrice * commission;
  totalAmount = stockPrice + commissionPrice;

  return 0;
}
