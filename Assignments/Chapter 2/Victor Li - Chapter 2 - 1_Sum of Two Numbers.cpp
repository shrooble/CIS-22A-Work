/*
  Victor Li
  Chapter 2: Sum of Two Numbers
  This program assigns 50 and 100 to int variables, stores the sum of both in the total variable, and outputs the sum to the console
*/

#include <iostream>
using namespace std;

int main()
{
  int numberOne = 50, numberTwo = 100, total;

// This calculates the sum of the numberOne and numberTwo variables
  total = numberOne + numberTwo;
  
  cout << "The total value of " << numberOne << " and " << numberTwo << " is " << total << "." << endl;

  return 0;
}
