/*
  Victor Li
  Chapter 4: Body Mass Index

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double BMI, weight, height;

  cout << "Enter your weight:\n";
  cin >> weight;
  cout << "Enter your height:\n";
  cin >> height;

  BMI = (weight * 703) / pow(height, 2);

  if (BMI < 0) {
    cout << "\nInvalid Inputs\n";
  }
  else if (BMI < 18.5) {
    cout << "\nBMI: " << BMI << ", underweight\n";
  }
  else if (BMI < 25) {
    cout << "\nBMI: " << BMI << ", optimal\n";
  }
  else {
    cout << "\nBMI: " << BMI << ", overweight\n";
  }

  return 0;
}
