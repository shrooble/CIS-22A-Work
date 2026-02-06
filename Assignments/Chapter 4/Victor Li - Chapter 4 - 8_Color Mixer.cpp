/*
  Victor Li
  Chapter 4: 8 - Color Mixer
  This program outputs the relevant primary color combination between Red, Blue, or Yellow based on the user's input of 2 primary colors
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  string colorOne, colorTwo;

  cout << "Enter two primary colors to mix (Red, Blue, or Yellow), each input should be separated by a space:\n";
  cin >> colorOne, colorTwo;

// This checks whether the inputs are Red or Blue
  if ((colorOne == "Red" && colorTwo == "Blue") || (colorOne == "Blue" &&  colorTwo == "Red")) {
    cout << "\n" << colorOne << " and " << colorTwo << " mixed together create purple\n";
  }
// This checks whether the inputs are Red or Yellow
  else if ((colorOne == "Red" && colorTwo == "Yellow") || (colorOne == "Yellow" &&  colorTwo == "Red")) {
    cout << "\n" << colorOne << " and " << colorTwo << " mixed together create orange\n";
  }
// This checks whether the inputs are Blue or Yellow
  else if ((colorOne == "Blue" && colorTwo == "Yellow") || (colorOne == "Yellow" &&  colorTwo == "Blue")) {
    cout << "\n" << colorOne << " and " << colorTwo << " mixed together create green\n";
  }
// This occurs if the input is something other than Red, Blue, or Yellow
  else {
    cout << "\nInvalid Inputs\n";
  }

  return 0;
}
