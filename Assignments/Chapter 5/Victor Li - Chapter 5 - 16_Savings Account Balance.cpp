/*
  Victor Li
  Chapter 5: 16 - Savings Account Balance

*/

#include <iostream>

using namespace std;

int main() {
  double annualInterestRate, startingBalance, months, endingBalance, deposit, withdrawn;

  cout << "Enter the annual interest rate:\n";
  cin >> annualInterestRate;
  cout << "Enter your starting balance:\n";
  cin >> startingBalance;
  cout << "Enter the number of months that have passed since the account opened:\n";
  cin >> months;


  while (
    for (int i = 1; i <= months; ++i) {
      while (deposit < 0) {
        cout << "Enter the amount deposited into the account for month: " << i << endl;
        cout << "(Enter a 0 if there were no deposits)\n";
        cin >> deposits;
      }
    
    }
  

  
  return 0;
}
