/*
  Victor Li
  Chapter 4: 4 - Areas of Rectangles
  This program compares the area of 2 different rectangles
*/

#include <iostream>

using namespace std;

int main() {
  double lengthOne, widthOne, lengthTwo, widthTwo, areaOne, areaTwo;

  cout << "What is the length and width of the first rectangle, each input should be separated by a space:\n";
  cin >> lengthOne >> widthOne;
  cout << "What is the length and width of the second rectangle, each input should be separated by a space:\n";
  cin >> lengthTwo >> widthTwo;

// This finds the area of the 1st rectangle by the product of the first length and width inputs
  areaOne = lengthOne * widthOne;
// This finds the area of the 2nd rectangle by the product of the second length and width inputs
  areaTwo = lengthTwo * widthTwo;

// This checks whether the area of the 1st rectangle is larger than the 2nd rectangle
  if (areaOne > areaTwo) {
    cout << "\nThe area of rectangle one, " << areaOne << ", is greater than rectangle two, " << areaTwo << endl;
  }
// This checks whether the area of the 1st rectangle is less than the 2nd rectangle
  else if (areaOne < areaTwo) {
    cout << "\nThe area of rectangle one, " << areaOne << ", is less than rectangle two, " << areaTwo << endl;
  }
// This checks whether the area of the 1st rectangle is equal to the 2nd rectangle
  else if (areaOne == areaTwo) {
    cout << "\nThe area of rectangle one, " << areaOne << ", is equal to rectangle two, " << areaTwo << endl;
  }
  else {
    cout << "\nInvalid inputs\n";
  }
  
  return 0;
}
