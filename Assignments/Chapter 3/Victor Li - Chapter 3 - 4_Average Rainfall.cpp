/*
  Victor Li
  Chapter 3: 4 - Average Rainfall
  This program calculates and outputs the average rainfall for 3 months
*/

#include <iostream>
#include <iomanip>
#include <string>

int main() {
  string monthOne, monthTwo, monthThree;
  double rainOne, rainTwo, rainThree, averageRain;

  cout << "Enter the month name followed by the amount of rainfall received (inches), each input should be separated by a space:\n";
  cin >> monthOne >> rainOne >> monthTwo >> rainTwo >> monthThree >> rainThree;

// This determines the average amount of rainfall by getting the sum of the rainfall amount for 3 months before dividing it by 3
  averageRain = (rainOne + rainTwo + rainThree) / 3;
  
  cout << "The average rainfall for " << monthOne << ", " << monthTwo << ", and " << monthThree << endl;
  cout << " is " << fixed << setprecision(2) << showpoint << averageRain << " inches.\n";

  return 0;
}
