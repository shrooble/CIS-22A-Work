/*
  Victor Li
  Chapter 4: Areas of Rectangles

*/

#include <iostream>

using namespace std;

int main() {
  double lengthOne, widthOne, lengthTwo, widthTwo, areaOne, areaTwo;

  cout << "What is the length and width of the first rectangle, each input should be separated by a space:\n";
  cin >> lengthOne >> widthOne;
  cout << "What is the length and width of the second rectangle, each input should be separated by a space:\n";
  cin >> lengthTwo >> widthTwo;

  areaOne = lengthOne * widthOne;
  areaTwo = lengthTwo * widthTwo;

  if (areaOne > areaTwo) {
    cout << "\nThe area of rectangle one, " << areaOne << ", is greater than rectangle two, " << areaTwo << endl;
  }
  else if (areaOne < areaTwo) {
    cout << "\nThe area of rectangle one, " << areaOne << ", is less than rectangle two, " << areaTwo << endl;
  }
  else if (areaOne == areaTwo) {
    cout << "\nThe area of rectangle one, " << areaOne << ", is equal to rectangle two, " << areaTwo << endl;
  }
  else {
    cout << "\nInvalid inputs\n";
  }
  
  return 0;
}
