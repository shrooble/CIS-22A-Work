/*
  Victor Li
  Chapter 4: 10 - Days In a Month

*/

#include <iostream>

using namespace std;

int main() {
  int month, year, leapYear;

  cout << "Enter a month from 1 - 12:\n";
  cin >> month;
  cout << "Enter a year:\n";
  cin >> year;

  if ( !(year % 100)) {
    if ( !(year % 400)) {
      leapYear = 1;
    }
    else {
      leapYear = 0;
    }
  }
  else if ( !(year % 4)) {
    leapYear = 1;
  }
  else {
    leapYear = 0;
  }

  switch (month) {
    case 0:
      cout << "\nInvalid Month Input\n";
      break;
    case 1:
      cout << "\nThere are 31 days\n";
      break;
    case 2:
      if (leapYear) {
        cout << "\nThere are 29 days\n";
      }
      else {
        cout << "\nThere are 28 days\n";
      }
      break;
    case 3:
      cout << "\nThere are 31 days\n";
      break;
    case 4:
      cout << "\nThere are 30 days\n";
      break;
    case 5:
      cout << "\nThere are 31 days\n";
      break;
    case 6:
      cout << "\nThere are 30 days\n";
      break;
    case 7:
      cout << "\nThere are 31 days\n";
      break;
    case 8:
      cout << "\nThere are 31 days\n";
      break;
    case 9:
      cout << "\nThere are 30 days\n";
      break;
    case 10:
      cout << "\nThere are 31 days\n";
      break;
    case 11:
      cout << "\nThere are 30 days\n";
      break;
    case 12:
      cout << "\nThere are 31 days\n";
      break;
    default:
      cout << "\nInvalid Inputs\n";
      break;

  return 0;
}
