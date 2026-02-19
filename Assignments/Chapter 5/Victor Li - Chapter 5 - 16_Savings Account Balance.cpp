/*
  Victor Li
  Chapter 5: 16 - Savings Account Balance

*/

#include <iostream>

using namespace std;

int main() {
  double annualInterestRate, monthlyInterestRate, balance, months, deposit, withdraws, monthlyInterest;

  cout << "Enter the annual interest rate:\n";
  cin >> annualInterestRate;
  cout << "Enter your starting balance:\n";
  cin >> balance;
  cout << "Enter the number of months that have passed since the account opened:\n";
  cin >> months;

  monthlyInterestRate = annualInterestRate / 12;
  
  for (int i = 1; i <= months; ++i) {
    while (balance >= 0) {
      while (deposit < 0) {
        cout << "Enter the amount deposited into the account for month: " << i << endl;
        cout << "(Enter a 0 if there were no deposits)\n";
        cin >> deposits;
      }
      while (withdraws < 0) {
        cout << "Enter the amount withdrawn from the account for month: " << i << endl;
        cout << "(Enter a 0 if there were no withdraws)\n";
        cin >> withdraws;
      }
      
      monthlyInterest = balance * monthlyInterestRate;
      balance += monthlyInterest;


      
    }
    
  
  }
  

  
  return 0;
}
