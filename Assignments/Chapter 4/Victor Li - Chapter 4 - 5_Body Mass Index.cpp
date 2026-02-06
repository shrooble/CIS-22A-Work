/*
  Victor Li
  Chapter 4: 5 - Body Mass Index
  This program checks the user's BMI and outputs whether they are underweight, optimal, or overweight considering their weight and height
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double BMI, weight, height;

  cout << "Enter your weight (lbs):\n";
  cin >> weight;
  cout << "Enter your height (inches):\n";
  cin >> height;

// This calculates the BMI with the quotient between the product of the weight times 703, divided by the height squared
  BMI = (weight * 703) / pow(height, 2);

// This checks whether the BMI is a valid number (More than 0) (Inclusive)
  if (BMI <= 0) {
    cout << "\nInvalid Inputs\n";
  }
// This checks whether the BMI is between 1 and 18.5 (Noninclusive)
  else if (BMI < 18.5) {
    cout << "\nBMI: " << BMI << ", underweight\n";
  }
// This checks whether the BMI is between 18.5 and 25 (Inclusive)
  else if (BMI <= 25) {
    cout << "\nBMI: " << BMI << ", optimal\n";
  }
// Otherwise, if the BMI is larger than 25 it outputs "overweight"
  else {
    cout << "\nBMI: " << BMI << ", overweight\n";
  }

  return 0;
}
