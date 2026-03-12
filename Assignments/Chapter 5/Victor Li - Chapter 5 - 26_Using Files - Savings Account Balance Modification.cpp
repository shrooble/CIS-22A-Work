/*
  Victor Li
  Chapter 5: 26 - Using Files - Savings Account Balance Modification
  This program calculates and outputs the amount of deposits, withdrawals, ending balance, and the total interest earned over a number of months to a file
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  double annualInterestRate = 0.0, monthlyInterestRate = 0.0, balance, deposit = 0.0, withdraws = 0.0, monthlyInterest, totalInterest = 0.0;
  int months, depositCount = 0, withdrawCount = 0, monthCount = 0;
  bool positiveDeposit = false, positiveWithdraw = false;

  cout << "Enter your starting balance:\n";
  cin >> balance;
  cout << "Enter the number of months that have passed since the account opened:\n";
  cin >> months;

// This loops ensures the user inputs an annual interest rate greater than 0
  while (annualInterestRate <= 0) {
    cout << "Enter the annual interest rate:\n";
    cin >> annualInterestRate;
  }
  
// This calculates the monthly interest rate by dividing the annual interest rate by 12
  monthlyInterestRate = annualInterestRate / 12;

// This loops for the amount of months the user inputted
  for (int i = 1; i <= months; ++i) {
    positiveDeposit = false;
    positiveWithdraw = false;
    
  // This checks whether the balance is above 0 at any point
    while (balance >= 0) {
    // This loops ensures the user enters a deposit amount above 0
      while (!positiveDeposit) {
        cout << "\nEnter a positive amount deposited into the account for month: " << i << endl;
        cout << "(Enter a 0 if there were no deposits)\n";
        cin >> deposit;
        if (deposit < 0) {
          cout << " - Enter a positive amount\n";
        }
        else if (deposit == 0) {
          positiveDeposit = true;
        }
        else {
        // This adds the deposit to the balance, counts the amount of deposits, and exits the deposit loop
          balance += deposit;
          depositCount += 1;
          positiveDeposit = true;
        }
      }
      
    // This loops ensures the user enters a withdrawal amount above 0
      while (!positiveWithdraw) {
        cout << "\nEnter the amount withdrawn from the account for month: " << i << endl;
        cout << "(Enter a 0 if there were no withdraws)\n";
        cin >> withdraws;
        if (withdraws < 0) {
          cout << " - Enter a positive withdraw amount\n";
        }
        else if (withdraws == 0) {
          positiveWithdraw = true;
        }
        else {
      // This subtracts the withdrawal from the balance, counts the amount of withdrawals, and exits the withdraw loop
          balance -= withdraws;
          withdrawCount += 1;
          positiveWithdraw = true;
        }
      }
      
      monthCount = i;
      
    // This calculates the monthly interest by the product of the monthly interest rate with the balance, also adding the monthly interest to the total interest 
      if (balance > 0) {
        monthlyInterest = balance * monthlyInterestRate;
      }
      else {
        monthlyInterest = 0;
      }
    // This adds the monthly interest to the balance and total interest
      totalInterest += monthlyInterest;
      balance += monthlyInterest;
      break;
    }
    
  // This occurs only if the balance goes negative
    if (balance < 0) {
      cout << "The account has been closed on month " << monthCount << " for a negative balance of " << balance << endl;
      break;
    }
  }
  
  cout << "\nEnding Balance: " << balance << endl;
  cout << "Total Deposits: " << depositCount << endl;
  cout << "Total Withdraws: " << withdrawCount << endl;
  cout << "Total Interest: " << totalInterest << endl;

  ofstream outFile("Savings Account Report.txt");
  
  outFile << "\nEnding Balance: " << balance << endl;
  outFile << "Total Deposits: " << depositCount << endl;
  outFile << "Total Withdraws: " << withdrawCount << endl;
  outFile << "Total Interest: " << totalInterest << endl;

  outFile.close();
  
  return 0;
}
