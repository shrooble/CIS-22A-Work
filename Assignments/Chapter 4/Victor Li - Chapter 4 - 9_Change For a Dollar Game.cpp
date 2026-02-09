/*
  Victor Li
  Chapter 4: 9 - Change for a Dollar Game
  This program asks the user to add up to $1 using a user inputted amount of pennies, nickels, dimes, and quarters
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double pennies, nickels, dimes, quarters, total;

  cout << "Enter the number of pennies, nickels, dimes, and quarters (In this order, separated by spaces) to add up to 1 dollar:\n" << fixed << setprecision(2) << showpoint;
  cin >> pennies >> nickels >> dimes >> quarters;

// This multiplies each coin with their respective coin values
  nickels *= 5.0;
  dimes *= 10.0;
  quarters *= 25.0;

// This adds the sum of each coin before dividing by 100 
  total = (pennies +  nickels + dimes + quarters) / 100;

// This checks whether the coins add up to $1 exactly
  if (total == 1) {
    cout << "\nYou correctly got to $1 using: " << pennies << " pennies, " << nickels / 5 << " nickels, " << dimes / 10 << " dimes, and " << quarters / 25 << " quarters\n";
  }
// This checks whether the coins were less than $1
  else if (total < 1) {
    cout << "\nYou were $" << 1 - total << " short of $1\n";
  }
// This checks whether the coins were more than $1
  else if (total > 1) {
    cout << "\nYou were $" << total - 1 << " more than $1\n";
  }
  else {
    cout << "\nInvalid Inputs\n";
  }

  return 0;
}
