/*
  Victor Li
  Chapter 4: 8 - Color Mixer

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  string colorOne, colorTwo;

  cout << "Enter two primary colors to mix (Red, Blue, or Yellow), each input should be separated by a space:\n";
  cin >> colorOne, colorTwo;

  if ((colorOne == "Red" && colorTwo == "Blue") || (colorOne == "Blue" &&  colorTwo == "Red")) {
    cout << "\n" << colorOne << " and " << colorTwo << " mixed together create purple\n";
  }
  else if ((colorOne == "Red" && colorTwo == "Yellow") || (colorOne == "Yellow" &&  colorTwo == "Red"))
    cout << "\n" << colorOne << " and " << colorTwo << " mixed together create orange\n";
  }
  else if ((colorOne == "Blue" && colorTwo == "Yellow") || (colorOne == "Yellow" &&  colorTwo == "Blue"))
        cout << "\n" << colorOne << " and " << colorTwo << " mixed together create green\n";
  }
  else {
    cout << "Invalid Inputs"
  }

  return 0;
}
