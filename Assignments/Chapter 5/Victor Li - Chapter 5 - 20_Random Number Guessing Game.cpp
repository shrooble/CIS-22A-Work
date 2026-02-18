/*
  Victor Li
  Chapter 5: 20 - Random Number Guessing Game
  This program generates a random number and asks the user to guess what the number is
*/

#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  int randomNumber, userGuess;

// This randomizes and assigns the random number based on the user's time
  srand(time(0));
  randomNumber = rand() % 1000 + 1;

// This loop continues until the user guesses the number
  while (userGuess != randomNumber) {
  // This loop checks whether the user correctly input a valid number from the range 1 - 1000
    while (userGuess > 1000 || userGuess < 1) {
      cout << "Guess a random number from 1 - 1000:\n";
      cin >> userGuess;  
    }
    if (userGuess > randomNumber) {
      cout << "Too high, try again.\n";
      cin >> userGuess;  
    }
    else if (userGuess < randomNumber) {
      cout << "Too low, try again.\n";
      cin >> userGuess;  
    }
    else {
      cout << "Error\n";
    }
  }

  cout << "You guessed the correct number: " << randomNumber << endl;
  
  return 0;
}
