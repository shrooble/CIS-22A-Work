/*
  Victor Li
  Chapter 3: 9 - How Many Calories?
  This program calculates the amount of calories the user consumed from cookies based on their input
*/

#include <iostream>

using namespace std;

int main() {
  double cookieBag = 30.0, servingAmount = 10.0, servingCalories = 300.0, calories;
  int cookieAmount;

  cout << "How many cookies did you eat:\n";
  cin >> cookieAmount;

// This calculates the calories consumed by dividing the serving calories by the serving amount and cookie bag amount (30) and multiplying the quotient by the cookies consumed
  calories = ((servingCalories / servingAmount) / cookieBag) * cookieAmount;

  cout << "Calories: " << calories << endl;

  return 0;
}
