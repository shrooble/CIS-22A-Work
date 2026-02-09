/*
  Victor Li
  Chapter 4: 1 - Minimum/Maximum
  This program compares 2 different user inputted numbers
*/

#include <iostream>

using namespace std;

int main() {
  int numberOne, numberTwo;

  cout << "Enter 2 numbers, each separated by a space:\n";
  cin >> numberOne >> numberTwo;

// This compares whether the 2 numbers are equal to each other
  if (numberOne == numberTwo) {
    cout << "\n" << numberOne << " is equal to " << numberTwo << endl;
  }
// This compares whether the 1st number is larger than the 2nd number
  else if (numberOne > numberTwo) {
    cout << "\n" << numberOne << " is larger than " << numberTwo << endl;
  }
// This compares whether the 1st number is less than the 2nd number
  else if (numberOne < numberTwo) {
    cout << "\n" << numberOne << " is less than " << numberTwo << endl;
  }
  else {
    cout << "\nError\n";
  }

  return 0;
}
