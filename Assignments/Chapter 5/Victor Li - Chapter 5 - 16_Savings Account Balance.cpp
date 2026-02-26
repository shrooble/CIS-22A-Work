/*
  Victor Li
  Chapter 5: 16 - Savings Account Balance
  This program calculates and outputs the amount of deposits, withdrawals, ending balance, and the total interest earned over a number of months
*/

#include <iostream>

using namespace std;

int main() {
  double annualInterestRate = 0.0, monthlyInterestRate, balance, deposit, withdraws, monthlyInterest, totalInterest;
  int months, depositCount = 0, withdrawCount = 0;
  bool positiveDeposit = false, positiveWithdraw = false;

  cout << "Enter your starting balance:\n";
  cin >> balance;
  cout << "Enter the number of months that have passed since the account opened:\n";
  cin >> months;

// This loops ensures the user puts an annual interest rate greater than 0
  while (annualInterestRate <= 0) {
    cout << "Enter the annual interest rate:\n";
    cin >> annualInterestRate;
  }
  
// This calculates the monthly interest rate by dividing the annual interest rate by 12
  monthlyInterestRate = annualInterestRate / 12;

// This loops for the amount of months the user inputted
  for (int i = 1; i <= months; ++i) {
  // This checks whether the balance is above 0 at any point
    while (balance >= 0) {
    // This loops ensures the user enters a deposit amount above 0
      while (!positiveDeposit) {
        cout << "Enter a positive amount deposited into the account for month: " << i << endl;
        cout << "(Enter a 0 if there were no deposits)\n";
        cin >> deposit;
        if (deposit < 0) {
          cout << " - Enter a positive amount\n";
        }
        else {
        // This adds the deposit to the balance, counts the amount of deposits, and exits the loop
          balance += deposit;
          depositCount += 1;
          positiveDeposit = true;
        }
      }
    // This loops ensures the user enters a withdrawal amount above 0
      while (!positiveWithdraw) {
        cout << "Enter the amount withdrawn from the account for month: " << i << endl;
        cout << "(Enter a 0 if there were no withdraws)\n";
        cin >> withdraws;
        if (withdraws < 0) {
          cout << " - Enter a positive withdraw amount\n";
        }
        else {
      // This subtracts the withdrawal from the balance, counts the amount of withdrawals, and exits the loop
        balance -= withdraws;
        withdrawCount += 1;
        positiveWithdraw = true;
        }
      }

    // This calculates the monthly interest by the product of the monthly interest rate with the balance, also adding the monthly interest to the total interest 
      if (balance > 0) {
      monthlyInterest = balance * monthlyInterestRate;
      }
      else {
        monthlyInterest = 0;
      }
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
