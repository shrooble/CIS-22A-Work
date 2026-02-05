/* 
  Victor Li
  Chapter 4: 3 - Magic Dates
  This program checks whether the inputted date is a magic date
*/

#include <iostream>

using namespace std;

int main() {
  int day, month, year, magicDate;

  cout << "Enter a month (In numeric form):\n";
  cin >> month;
  cout << "Enter a day:\n";
  cin >> day;
  cout << "Enter a two-digit year:\n";
  cin >> year;

// This multiplies the day and the month together
  magicDate = day * month;

// This checks whether the product of the month and day are equal to the year
  if (magicDate == year) {
    cout << "\n" << month << "/" << day << "/" << year << " is a magic date\n";
  }
// Otherwise, it outputs that its not a magic date
  else if (magicDate != year) {
    cout << "\n" << month << "/" << day << "/" << year << " is not a magic date\n";
  }
  else {
    cout << "\nInvalid inputs\n";
  }
  
  return 0;
}
