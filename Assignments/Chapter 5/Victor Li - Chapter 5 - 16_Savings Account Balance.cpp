/*
  Victor Li
  Chapter 5: 16 - Savings Account Balance
  This program calculates and outputs the amount of deposits, withdrawals, ending balance, and the total interest earned over a number of months
*/

#include <iostream>

using namespace std;

int main() {
  double annualInterestRate, monthlyInterestRate, balance, deposit, withdraws, monthlyInterest, totalInterest;
  int months, depositCount, withdrawCount;

  cout << "Enter the annual interest rate:\n";
  cin >> annualInterestRate;
  cout << "Enter your starting balance:\n";
  cin >> balance;
  cout << "Enter the number of months that have passed since the account opened:\n";
  cin >> months;

// This calculates the monthly interest rate by dividing the annual interest rate by 12
  monthlyInterestRate = annualInterestRate / 12;

// This loops for the amount of months the user inputted
  for (int i = 1; i <= months; ++i) {
  // This checks whether the balance is above 0 at any point
    while (balance >= 0) {
    // This loops ensures the user enters a deposit amount above 0
      while (deposit < 0) {
        cout << "Enter the amount deposited into the account for month: " << i << endl;
        cout << "(Enter a 0 if there were no deposits)\n";
        cin >> deposits;
      // This counts the amount of deposits
        depositCount += 1;
      }
    // This loops ensures the user enters a withdrawal amount above 0
      while (withdraws < 0) {
        cout << "Enter the amount withdrawn from the account for month: " << i << endl;
        cout << "(Enter a 0 if there were no withdraws)\n";
        cin >> withdraws;
      // This counts the amount of withdrawals
        withdrawCount += 1;
      }

    // This calculates the monthly interest by the product of the monthly interest rate with the balance, also adding the monthly interest to the total interest 
      monthlyInterest = balance * monthlyInterestRate;
      totalInterest += monthlyInterest;
    // This adds the monthly interest to the balance
      balance += monthlyInterest;
    }
  // This occurs only if the balance goes negative
    if (balance < 0) {
      cout << "The account has been closed on month " << i << " for a negative balance of " << balance << endl;
      break;
    }
  }
  
  cout << "Ending Balance: " << balance << endl;
  cout << "Total Deposits: " << depositCount << endl;
  cout << "Total Withdraws: " << withdrawCount << endl;
  cout << "Total Interest: " << totalInterest << endl;
  
  return 0;
}
