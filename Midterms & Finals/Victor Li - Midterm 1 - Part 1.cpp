/*
  Victor Li
  Team Name: Cat++
  Team Members: Kenny Nguyen
  
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  char orderEnd;
  bool option = true, staff = false, invalidStaffChoice = true, endOrderChoice = false;
  int burgerChoice, quantityOne, quantityTwo, quantityThree, quantityFour, quantityFive;
  const double TAX_MULTIPLIER = 0.09, ONE_PRICE = 5.25, TWO_PRICE = 5.75, THREE_PRICE = 5.95, FOUR_PRICE = 5.95, FIVE_PRICE = 5.95;
  double subtotal, staffTax;
  string burgerOne = "De Anza Burger", burgerTwo = "Bacon Cheese Burger", burgerThree = "Mushroom Swiss Burger", burgerFour = "Western Burger", 
          burgerFive = "Don Cali Burger", taxOption;
  
  cout << showpoint << fixed << setprecision(2);
  cout << burgerOne << " - $" << ONE_PRICE << endl;
  cout << burgerTwo << " - $" << TWO_PRICE << endl;
  cout << burgerThree << " - $" << THREE_PRICE << endl;
  cout << burgerFour << " - $" << FOUR_PRICE << endl;
  cout << burgerFive << " - $" << FIVE_PRICE << endl;
  cout << "End Order - 0\n";

// This loops until the user chooses to end the order
  while (option != false) {
  // This loops if the user enters a non valid choice (something not 0 - 5)
    while (burgerChoice > 5 || burgerChoice < 0) {
      cout << "\nChoose a burger from 1 - 5\n";
      cout << "Enter 0 if you want to end the order\n";
      cin >> burgerChoice;
    }
// This switch statement asks the user the quantity for the burger they chose
    switch (burgerChoice) {
      case 0:
        option = false;
        break;
      case 1:
        cout << "How many of " << burgerOne << " do you want to order:\n";
        cout << "Enter 0 to cancel\n";
        cin >> quantityOne;
        if (quantityOne == 0) {
          break;
        }
        break;
      case 2:
        cout << "How many of " << burgerTwo << " do you want to order:\n";
        cout << "Enter 0 to cancel\n";
        cin >> quantityTwo;
        if (quantityTwo == 0) {
          break;
        }
        break;
      case 3:
        cout << "How many of " << burgerThree << " do you want to order:\n";
        cout << "Enter 0 to cancel\n";
        cin >> quantityThree;
        if (quantityThree == 0) {
          break;
        }
        break;
      case 4:
        cout << "How many of " << burgerFour << " do you want to order:\n";
        cout << "Enter 0 to cancel\n";
        cin >> quantityFour;
        if (quantityFour == 0) {
          break;
        }
        break;
      case 5:
        cout << "How many of " << burgerFive << " do you want to order:\n";
        cout << "Enter 0 to cancel\n";
        cin >> quantityFive;
        if (quantityFive == 0) {
          break;
        }
        break;
      default:
        cout << "Error\n";
        break;
    }
    while (endOrderChoice != false) {
      cout << "Is that all? (Y or N):\n";
      cin >> orderEnd;
  // This switch statement asks the user if they want to end the order by pressing Y, or continuing by pressing N
      switch (orderEnd) {
        case 'Y':
        case 'y':
          endOrderChoice = true;
          option = false;
          break;
        case 'n':
          
  }

// This loop ensures the user enters a valid user type
  while (invalidStaffChoice != true) {
    cout << "Are you a student or staff?\n";
    cin >> taxOption;
  // This statement changes staff to true and invalidStaffChoice to false, ending the while loop
    if (taxOption == "staff" || taxOption == "Staff") {
      staff = true;
      invalidStaffChoice = false;
    }
  // This statement changes staff to false and invalidStaffChoice to false, ending the while loop
    else if (taxOption == "student" || taxOption == "Student") {
      staff = false;
      invalidStaffChoice = false;
    }
    else {
      cout << "Invalid Option\n";
      invalidStaffChoice = true;
    }
  }
    
  if (staff) {
    subtotal = staffTax * ((burgerOne * burgerOnePrice) + (burgerOne * burgerOnePrice) + (burgerOne * burgerOnePrice) + (burgerOne * burgerOnePrice)
  cout << 
      
  return 0;
}
