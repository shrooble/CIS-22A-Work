/*
  Victor Li
  Chapter 4: 7 - Time Calculator
  This program displays the relevant seconds, minutes, hours, or days based on an user inputted amount of seconds
*/

#include <iostream>

using namespace std;

int main() {
  int seconds, minutes, hours, days;

  cout << "Enter a time amount in seconds:\n";
  cin >> seconds;

// This checks whether seconds is a valid input (more than 0 seconds, Noninclusive)
  if  (seconds > 0) {
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
  // This only occurs if (seconds > 0) && (seconds < 60)
    else {
      cout << "\n" << seconds << " seconds is less than 1 minute\n";
    }
  }
// This only occurs if seconds <= 0
  else {
    cout << "\nInvalid Amount Of Time\n";
  }

  return 0;
}
