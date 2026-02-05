/*
  Victor Li
  Chapter 4: 7 - Time Calculator

*/

#include <iostream>

using namespace std;

int main() {
  int seconds, minutes, hours, days;

  cout << "Enter a time amount in seconds:\n";
  cin >> seconds;

// This checks whether the amount is longer than 60 seconds (Inclusive)
  if (seconds >= 60) {
  // 
    minutes = seconds / 60;
    cout << "\nThere are " << minutes << " minutes in that amount of time\n";
  //
    if (seconds >= 3600) {
    //
      hours = seconds / 3600;
      cout << "There are " << hours << " hours in that amount of time\n";
    //
      if (seconds >= 86400) {
      //
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
