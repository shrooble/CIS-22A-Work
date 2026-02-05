/*
  Victor Li
  Chapter 4: 2 - Roman Numeral Converter
  This program converts the numbers 1 - 10 into their roman numeral counterparts
*/

#include <iostream> 

using namespace std;

int main() {
  int userNumber;

  cout << "Enter a number for 1 - 10:\n";
  cin >> userNumber;

// This switch statement checks for a number between 1 and 10 and outputs their roman numeral, or outputs "Not a number from 1 - 10"
  switch(userNumber) {
    case 1: 
      cout << "\nRoman Numeral: I\n";
      break;
    case 2: 
      cout << "\nRoman Numeral: II\n";
      break;
    case 3: 
      cout << "\nRoman Numeral: III\n";
      break;
    case 4: 
      cout << "\nRoman Numeral: IV\n";
      break;
    case 5: 
      cout << "\nRoman Numeral: V\n";
      break;
    case 6: 
      cout << "\nRoman Numeral: VI\n";
      break;
    case 7: 
      cout << "\nRoman Numeral: VII\n";
      break;
    case 8: 
      cout << "\nRoman Numeral: VIII\n";
      break;
    case 9: 
      cout << "\nRoman Numeral: IX\n";
      break;
    case 10: 
      cout << "\nRoman Numeral: X\n";
      break;
    default: 
      cout << "\nNot a number from 1 - 10\n";
      break;
  }

  return 0;
}
