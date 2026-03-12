/*
  Victor Li
  Chapter 6: 8 - Coin Toss
  This program simulates a coin toss based on the amount that the user inputs
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void coinToss(int = 0);

int main() {
  int tossAmount;

  cout << "Enter the amount of times the coin should be tossed:\n";
  cin >> tossAmount;

// Function call to coinToss
  coinToss(tossAmount);
  
  return 0;
}

void coinToss(int value) {
  int randomNumber;
// This loops for the amount of coin tosses that the user inputted
  for (int i = 0; i < value; ++i) {
  // This makes the random number based on the user's time
    srand(time(0));  
  // This randomizes the number 
    randomNumber = rand() % 2 + 1;
    cout << randomNumber << " ";
    if (randomNumber == 1) {
      cout << "\nHeads";
    }
    else {
      cout << "\nTails";
    }
  }
}
