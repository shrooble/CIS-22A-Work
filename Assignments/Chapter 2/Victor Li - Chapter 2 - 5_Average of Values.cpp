/*
  Victor Li
  Chapter 2: Average of Values
  This program calculates and outputs the sum and average of five numbers
*/

#include <iostream>

using namespace std;

int main()
{
  double numOne = 28, numTwo = 32, numThree = 37, numFour = 24, numFive = 33, sum, average;

  sum = numOne + numTwo + numThree + numFour + numFive;
  average = sum / 5;

  cout << "The sum of the five numbers are " << sum << "." << endl;
  cout << "The average of the five numbers are " << average << "." << endl;

  return 0;
}
