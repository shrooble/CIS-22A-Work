/*
  Victor Li
  Chapter 4: 7 - Time Calculator
  This program displays the relevant seconds, minutes, hours, or days based on a user inputted amount of seconds
*/

#include <iostream>

using namespace std;

int main() {
  double seconds, minutes, hours, days;

  cout << "Enter a time amount in seconds:\n";
  cin >> seconds;

// This checks whether the amount is longer than 60 seconds (Inclusive)
  if (seconds >= 60) {
  // This divides the seconds by 60 to get the amount of minutes
    minutes = seconds / 60;
    cout << "\nThere are " << minutes << " minutes in that amount of time\n";
  // This checks whether the amount is longer than 3600 seconds (Inclusive), after checking whether it was longer than 60 seconds
    if (seconds >= 3600) {
    // This divides the seconds by 3600 to get the amount of hours
      hours = seconds / 3600;
      cout << "There are " << hours << " hours in that amount of time\n";
    // This checks whether the amount is longer than 86,400 seconds (Inclusive), after checking whether it was longer than 3600 seconds
      if (seconds >= 86400) {
      // This divides the seconds by 86,400 to get the amount of days
        days = seconds / 86400;
        cout << "There are " << days << " days in that amount of time\n";
      }
    }
  }
  else {
    cout << "Invalid Input\n";
  }

  return 0;
}
