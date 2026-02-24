/*
  Victor Li
  2/24/2026 Classwork
  Practicing using functions
*/

#include <iostream>

using namespace std;

// This prototypes the message function (So the function can appear after main)
void message(int);
int multiplication(int, int);

/*
  1 - Prototype -> void first(int);
  2 - Define    -> void first() { int x }
  3 - Call      -> first(y);
*/

int squareFunction(int x) {
  x = x * x;
  return x;
}

int main() {
  int number, x, y, firstNumber, secondNumber;
  
  cout << "Enter a number to square:\n";
  cin >> number;

// This calls squareFunction and passes number as an argument, then calls message with the output of squareFunction as the argument
   message(squareFunction(number));
/*
  Can also be done like:
  x = squareFunction(number);
  message(x);
*/
  cout << "\n\nEnter 2 numbers to multiply together, separated by a space:\n";
  cin >> firstNumber >> secondNumber;
  
  y = multiplication(firstNumber, secondNumber);
  cout << "\n" << y;
  
  return 0;
}

void message(int number) {
  cout << "This is the squared number: " << number;
}

int multiplication (int numberOne, int numberTwo) {
  int x = numberOne * numberTwo;
  return x;
}
