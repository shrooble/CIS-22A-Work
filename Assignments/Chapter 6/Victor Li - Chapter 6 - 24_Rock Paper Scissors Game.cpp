/*
  Victor Li
  Chapter 6: 24 - Rock, Paper, Scissors, Game
  This program lets the user play a game of Rock, Paper, Scissors against a computer
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int userChoice();
void rockChoice(int, bool&);
void paperChoice(int, bool&);
void scissorsChoice(int, bool&);

int main() {
  int randomNumber, value;
  bool endGame = false;
  
  srand(time(0));

// This continues looping if the game ends in a tie
  while (!endGame) {
  // This is the computers choice from 1 to 3 based on the user's time
    randomNumber = rand() % 3 + 1;
  
    value = userChoice();

// This determines which function is called based on the user's choice
    if (value == 1) {
      rockChoice(randomNumber, endGame);
    } 
    else if (value == 2) {
      paperChoice(randomNumber, endGame);
    } 
    else {
      scissorsChoice(randomNumber, endGame);
    } 
  }
  
  return 0;
}

// This is a menu that returns a value from 1 to 3 based on the user's Rock, Paper, Scissors choice
int userChoice() {
  int value;
  char userInput;
  bool validChoice = false;

// This ensures the user inputs a valid choice
  while (!validChoice) {
    cout << "Enter Rock, Paper, or Scissors as R, P, or S:\n";
    cin >> userInput;
  
    switch (userInput) {
      case 'r':
      case 'R':
        value = 1;
        validChoice = true;
      break;
      
      case 'p':
      case 'P':
        value = 2;
        validChoice = true;
      break;

      case 's':
      case 'S':
        value = 3;
        validChoice = true;
      break;
    
      default:
        cout << "\nInvalid Choice\n";
      break;
    }
  }
  
  return value;
}

// This function is called if the user chose rock
void rockChoice(int computerInput, bool &endGame) {
// This switch statement is determined by the computer's input
  switch (computerInput) {
    case 1:
      cout << "\nGame Tie - Both chose Rock\n";
    break;
    
    case 2:
      cout << "\nComputer Wins - Computer chose Paper over User's Rock\n";
      endGame = true;
    break;
    
    case 3:
      cout << "\nUser Wins - User chose Rock over Computer's Scissors\n";
      endGame = true;
    break;
    
    default: 
      cout << "\nError\n";
    break;
  }
}

// This function is called if the user chose paper
void paperChoice(int computerInput, bool &endGame) {
// This switch statement is determined by the computer's input
  switch (computerInput) {
    case 1:
      cout << "\nUser Wins - User chose Paper over Computer's Rock\n";
      endGame = true;    
    break;
    
    case 2:
      cout << "\nGame Tie - Both chose Paper\n";
    break;
    
    case 3:
      cout << "\nComputer Wins - Computer chose Scissors over User's Paper\n";
      endGame = true;
    break;
    
    default: 
      cout << "\nError\n";
    break;
  }
}

// This function is called if the user chose scissors
void scissorsChoice(int computerInput, bool &endGame) {
// This switch statement is determined by the computer's input
  switch (computerInput) {
    case 1:
      cout << "\nComputer Wins - Computer chose Rock over User's Scissors\n";
      endGame = true;
    break;
    
    case 2:
      cout << "\nUser Wins - User chose Scissors over Computer's Paper\n";
      endGame = true; 
    break;
    
    case 3:
      cout << "\nGame Tie - Both chose Scissors\n";
    break;
    
    default: 
      cout << "\nError\n";
    break;
  }
}
