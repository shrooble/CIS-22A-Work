/*
  Victor Li
  Chapter 4: 10 - Days In a Month
  This program outputs the amount of days for a user inputted a month, accounting for potential leap years
*/

#include <iostream>

using namespace std;

int main() {
  int month, year, leapYear;

  cout << "Enter a month from 1 - 12:\n";
  cin >> month;
  cout << "Enter a four-digit year:\n";
  cin >> year;

// This checks whether the year is divisible by 100 (True if it has no remainder)
  if ( !(year % 100)) {
  // This checks whether the year is divisible by 400 (True if it has no remainder), after checking if it was divisible by 100 
    if ( !(year % 400)) {
      leapYear = 1;
    }
  // This only occurs if the year isn't divisible by 400 (False if it had a remainder)
    else {
      leapYear = 0;
    }
  }
// This checks whether the year is divisible by 4 (True if it has no remainder), failing the divisible by 100 check
  else if ( !(year % 4)) {
    leapYear = 1;
  }
// This only occurs if the year isn't divisible by 4 (False if it had a remainder)
  else {
    leapYear = 0;
  }

// This switch statement checks for a month between 1 and 12 and outputs the days for that month, otherwise it outputs "Invalid Month Input"
  switch (month) {
    case 0:
      cout << "\nInvalid Month Input\n";
      break;
    case 1:
      cout << "\nThere are 31 days in that month\n";
      break;
    case 2:
    // This checks whether it is a leap year or not for February
      if (leapYear) {
        cout << "\nThere are 29 days in that month\n";
      }
      else {
        cout << "\nThere are 28 days in that month\n";
      }
      break;
    case 3:
      cout << "\nThere are 31 days in that month\n";
      break;
    case 4:
      cout << "\nThere are 30 days in that month\n";
      break;
    case 5:
      cout << "\nThere are 31 days in that month\n";
      break;
    case 6:
      cout << "\nThere are 30 days in that month\n";
      break;
    case 7:
      cout << "\nThere are 31 days in that month\n";
      break;
    case 8:
      cout << "\nThere are 31 days in that month\n";
      break;
    case 9:
      cout << "\nThere are 30 days in that month\n";
      break;
    case 10:
      cout << "\nThere are 31 days in that month\n";
      break;
    case 11:
      cout << "\nThere are 30 days in that month\n";
      break;
    case 12:
      cout << "\nThere are 31 days in that month\n";
      break;
    default:
      cout << "\nInvalid Month Input\n";
      break;
  }

  return 0;
}
