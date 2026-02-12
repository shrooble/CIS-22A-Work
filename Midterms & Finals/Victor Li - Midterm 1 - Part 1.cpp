/*
  Victor Li
  Team Name: Cat++
  Team Members: Kenny Nguyen

*/

#include <iostream>


using namespace std;

int main() {
  bool taxOption;
  int burgerChoice, burgerOne, burgerTwo, burgerThree, burgerFour, burgerFive, quantity, option;

  cout << "De Anza Burger - $5.25\n";
  cout << "Bacon Cheese Burger - $5.75\n";
  cout << "Mushroom Swiss Burger - $5.95\n";
  cout << "Western Burger - $5.95\n";
  cout << "Don Cali Burger - $5.95\n";

  while (option != 0) {
    if (burgerChoice == 0 || quantity == 0) {
      break;
    }
    
    cout << "Enter 0 to end the order\n";
    cout << "Choose a burger by entering a number from 1 - 5\n";
    cin >> burgerChoice;
    cout << "How many do you want:\n";
    cin >> quantity;
    
    switch (burgerChoice) {
      case 1:
        burgerOne += quantity;
        break;
      case 2:
        burgerTwo += quantity;
        break;
      case 3:
        burgerThree += quantity;
        break;
      case 4:
        burgerFour += quantity;
        break;
      case 5:
        burgerFive += quantity;
        break;
      default:
        cout << "Invalid Option - Choose a burger option from 1 - 5\n";
        break;
    }

    cout << "Are you a student or staff?\n";
    cin >> taxOption;
    
    
  }
  return 0;
}
