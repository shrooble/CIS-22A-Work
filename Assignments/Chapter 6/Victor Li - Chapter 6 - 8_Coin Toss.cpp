/*
  Victor Li
  Chapter 6: 8 - Coin Toss
  This program simulates a coin toss based on the amount that the user inputs
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void coinToss(int 0);

int main() {
  int randomNumber, tossAmount;

// This makes the random number based on the user's time
  srand(time(0));
  
  cout << "Enter the amount of times the coin should be tossed:\n";
  cin >> tossAmount;

// Function call to coinToss
  coinToss(tossAmount);
  
  return 0;
}

void coinToss(int value) {
// This loops for the amount of coin tosses that the user inputted
  for (int i = 0; i < value; ++i) {
  // This randomizes the number 
    randomNumber = rand() % 1 + 1;
    if (randomNumber == 1) {
      cout << "\nHeads";
    }
    else {
      cout << "\nTails";
    }
  }
}
