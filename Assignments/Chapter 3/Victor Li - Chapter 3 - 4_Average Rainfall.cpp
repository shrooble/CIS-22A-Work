/*
  Victor Li
  Team Name: Cat++
  Team Members: Kenny Nguyen
  Chapter 3: 4 - Average Rainfall
  This program calculates and outputs the average rainfall for 3 months
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  string monthOne, monthTwo, monthThree;
  double rainOne, rainTwo, rainThree, averageRain;

  cout << "Enter 3 different months, each input should be separated by a space:\n";
  cin >> monthOne >> monthTwo >> monthThree;
  cout << "Enter the amount of rainfall received (inches) for each month respectively, each input should be separated by a space:\n";
  cin >> rainOne >> rainTwo >> rainThree;

// This determines the average amount of rainfall by getting the sum of the rainfall amount for 3 months before dividing the sum by 3
  averageRain = (rainOne + rainTwo + rainThree) / 3;
  
  cout << "\nThe average rainfall for the months " << monthOne << ", " << monthTwo << ", and " << monthThree;
  cout << " is: " << fixed << setprecision(3) << showpoint << averageRain << " inches\n";

  return 0;
}
