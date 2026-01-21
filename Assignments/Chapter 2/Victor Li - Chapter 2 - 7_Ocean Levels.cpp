/*
  Victor Li
  Chapter 2: Ocean Levels
  This program calculates the ocean's level after 5,7, and 10 years based on a 1.5 mm rise in ocean levels per year
*/

#include <iostream>

using namespace std;

int main()
{
  double oceanRise = 1.5;

  cout << "The ocean's level in 5 years will be " << oceanRise * 5 << " millimeters higher." << endl;
  cout << "The ocean's level in 7 years will be " << oceanRise * 7 << " millimeters higher." << endl;
  cout << "The ocean's level in 10 years will be " << oceanRise * 10 << " millimeters higher." << endl;

  return 0;
}
