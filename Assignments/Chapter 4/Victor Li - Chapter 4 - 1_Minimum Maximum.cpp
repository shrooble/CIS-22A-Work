/*
  Victor Li
  Chapter 4: Minimum/Maximum
  This program 
*/

#include <iostream>

using namespace std;

int main() {
  int numberOne, numberTwo;

  cout << "Enter 2 numbers, each separated by a space:\n";
  cin >> numberOne >> numberTwo;

  if (numberOne == numberTwo) {
    cout << "\n" << numberOne << " is equal to " << numberTwo << endl;
  }
  else if (numberOne > numberTwo) {
    cout << "\n" << numberOne << " is larger than " << numberTwo << endl;
  }
  else {
    cout << "\n" << numberTwo << " is larger than " << numberOne << endl;
  }

  return 0;
}
