/*
  Victor Li
  Team Name: Cat++
  Team Members: Kenny Nguyen
  Chapter 3: 10 - How Much Insurance?
  This program calculates the minimum amount of insurance the property owner should buy based on their structure replacement cost
*/

#include <iostream>

using namespace std;

int main() {
  double insurePercent = 0.80, structureCost, insuranceAmount;

  cout << "How much would it cost to replace the property:\n";
  cin >> structureCost;

// This calculates the insurance amount by multiplying the structure cost by the insure percentage
  insuranceAmount = structureCost * insurePercent;

  cout << "\nThe minimum amount of insurance you should get is: $" << insuranceAmount << endl;

  return 0;
}
