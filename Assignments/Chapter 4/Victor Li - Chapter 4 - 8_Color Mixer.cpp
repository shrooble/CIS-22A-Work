/*
  Victor Li
  Chapter 4: 8 - Color Mixer
  This program outputs the relevant primary color combination between red, blue, or yellow based on the user's input of 2 primary colors
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string colorOne, colorTwo;

  cout << "Enter two primary colors to mix (Red, Blue, or Yellow), each input should be separated by a space:\n";
  cin >> colorOne >> colorTwo;

// This forces the 1st letter to become lowercase, so it doesn't matter if the input is "Red" or "red"
  colorOne.at(0) = tolower(colorOne.at(0));
  colorTwo.at(0) = tolower(colorTwo.at(0));

// This checks whether the inputs are red or blue
  if ((colorOne == "red" && colorTwo == "blue") || (colorOne == "blue" &&  colorTwo == "red")) {
    cout << "\n" << colorOne << " and " << colorTwo << " mixed together create purple\n";
  }
// This checks whether the inputs are red or yellow
  else if ((colorOne == "red" && colorTwo == "yellow") || (colorOne == "yellow" &&  colorTwo == "red")) {
    cout << "\n" << colorOne << " and " << colorTwo << " mixed together create orange\n";
  }
// This checks whether the inputs are blue or yellow
  else if ((colorOne == "blue" && colorTwo == "yellow") || (colorOne == "yellow" &&  colorTwo == "blue")) {
    cout << "\n" << colorOne << " and " << colorTwo << " mixed together create green\n";
  }
// This occurs if the input is something other than red, blue, or yellow
  else {
    cout << "\nInvalid Inputs\n";
  }

  return 0;
}
