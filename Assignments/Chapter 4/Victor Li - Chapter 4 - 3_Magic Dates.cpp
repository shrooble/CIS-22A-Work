/* 
  Victor Li
  Chapter 4: Magic Dates

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

  magicDate = day * month;
  
  if (magicDate == year) {
    cout << "\n" << month << "/" << day << "/" << year << " is a magic date\n";
  }
  else if (magicDate != year) {
    cout << "\n" << month << "/" << day << "/" << year << " is not a magic date\n";
  }
  else {
    cout << "\nInvalid inputs\n";
  }
  
  return 0;
}
