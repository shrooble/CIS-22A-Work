/*
  Victor Li
  Team Name: Cat++
  Team Members: Kenny Nguyen
  This program provides a menu for 5 burgers from the De Anza College Food Court and outputs a formatted bill to both the console and an output file
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main(){
  string userType, burgerOne = "De Anza Burger", burgerTwo = "Bacon Cheese Burger", burgerThree = "Mushroom Swiss Burger", burgerFour = "Western Burger", burgerFive = "Don Cali Burger";
  const double TAX_RATE = 0.09, ONE_PRICE = 5.25, TWO_PRICE = 5.75, THREE_PRICE = 5.95, FOUR_PRICE = 5.95, FIVE_PRICE = 5.95;    
  int quantityOne = 0, quantityTwo = 0, quantityThree = 0, quantityFour = 0, quantityFive = 0, burgerChoice = 0, amount = 0;
  double subtotal = 0.00, taxAmount = 0.00, total = 0.00;
  bool ordering = true, staffUser = false, invalidUserType = true;

  cout << fixed << showpoint << setprecision(2);
  cout << "---- De Anza Food Court ----\n";
  cout << "1. " << burgerOne << " - $" << ONE_PRICE << endl;
  cout << "2. " << burgerTwo << " - $" << TWO_PRICE << endl;
  cout << "3. " << burgerThree << " - $" << THREE_PRICE << endl;
  cout << "4. " << burgerFour << " - $" << FOUR_PRICE << endl;
  cout << "5. " << burgerFive << " - $" << FIVE_PRICE << endl;
  cout << "0. End Order\n";

// This loops the ordering menu until the user chooses to end the order (Entering 0)
  while (ordering) {
      cout << "\nChoose a burger (0-5): ";
      cin >> burgerChoice;
    // This ends the entire order
      if (burgerChoice == 0) {
        ordering = false;
      }
    // This loops if the user enters a valid burger choice (0 - 5)
      else if (burgerChoice >= 1 && burgerChoice <= 5) {
        cout << "Enter quantity: ";
        cin >> amount;
        // This switch statement asks the user the quantity for the burger they chose
          switch (burgerChoice) {
            case 1: quantityOne += amount; break;
            case 2: quantityTwo += amount; break;
            case 3: quantityThree += amount; break;
            case 4: quantityFour += amount; break;
            case 5: quantityFive += amount; break;
          }
      }
    // This sends the user back to the while loop for ordering
      else {
          cout << "Invalid option. Try again.\n";
      }
  }

// This loop ensures the user enters a valid user type (Staff or Student)
  while (invalidUserType) {
    cout << "\nAre you a Student or Staff? ";
    cin >> userType;
  // This statement changes staffUser to true and invalidUserType to false, ending the while loop
    if (userType == "Staff" || userType == "staff") {
      staffUser = true;
      invalidUserType = false;
    }
  // This statement changes invalidUserType to false, ending the while loop
    else if (userType == "Student" || userType == "student") {
      invalidUserType = false;
    }
    else {
      cout << "Invalid input.\n";
    }
  }

// This calculates the subtotal by the sum of each burger quantity multiplied by it's price
  subtotal = ((quantityOne * ONE_PRICE) + (quantityTwo * TWO_PRICE) + (quantityThree * THREE_PRICE) + (quantityFour * FOUR_PRICE) + (quantityFive * FIVE_PRICE));

// This only occurs if the user is a staff member
  if (staffUser) {
    taxAmount = subtotal * TAX_RATE;
  }

// This calculates the total bill by the sum of the subtotal and the tax amount
  total = subtotal + taxAmount;

// This creates and opens a file named "output.txt"
  ofstream outFile("output.txt");

// This outputs a formatted bill to the console and file based on the burgers and quantities chosen
  cout << "\n---- De Anza Food Court Bill ----\n";
  outFile << "---- De Anza Food Court Bill ----\n";
  if (quantityOne > 0) {
      cout << burgerOne << " x" << quantityOne << " = $" << quantityOne * ONE_PRICE << endl;
      outFile << burgerOne << " x" << quantityOne << " = $" << quantityOne * ONE_PRICE << endl;
  }
  if (quantityTwo > 0) {
      cout << burgerTwo << " x" << quantityTwo << " = $" << quantityTwo * TWO_PRICE << endl;
      outFile << burgerTwo << " x" << quantityTwo << " = $" << quantityTwo * TWO_PRICE << endl;
  }
  if (quantityThree > 0) {
      cout << burgerThree << " x" << quantityThree << " = $" << quantityThree * THREE_PRICE << endl;
      outFile << burgerThree << " x" << quantityThree << " = $" << quantityThree * THREE_PRICE << endl;
  }
  if (quantityFour > 0) {
      cout << burgerFour << " x" << quantityFour << " = $" << quantityFour * FOUR_PRICE << endl;
      outFile << burgerFour << " x" << quantityFour << " = $" << quantityFour * FOUR_PRICE << endl;
  }
  if (quantityFive > 0) {
      cout << burgerFive << " x" << quantityFive << " = $" << quantityFive * FIVE_PRICE << endl;
      outFile << burgerFive << " x" << quantityFive << " = $" << quantityFive * FIVE_PRICE << endl;
  }

  cout << "\nSubtotal: $" << subtotal << endl;
  cout << "Tax: $" << taxAmount << endl;
  cout << "Total: $" << total << endl;

  outFile << "\nSubtotal: $" << subtotal << endl;
  outFile << "Tax: $" << taxAmount << endl;
  outFile << "Total: $" << total << endl;

  outFile.close();

  return 0;
}

/*
Sample Output #1:
  ---- De Anza Food Court ----
  1. De Anza Burger - $5.25
  2. Bacon Cheese Burger - $5.75
  3. Mushroom Swiss Burger - $5.95
  4. Western Burger - $5.95
  5. Don Cali Burger - $5.95
  0. End Order
  
  Choose a burger (0-5): 1
  Enter quantity: 1
  
  Choose a burger (0-5): 0
  
  Are you a Student or Staff? staff
  
  ---- De Anza Food Court Bill ----
  De Anza Burger x1 = $5.25
  
  Subtotal: $5.25
  Tax: $0.47
  Total: $5.72
Sample Output #2:
  ---- De Anza Food Court ----
  1. De Anza Burger - $5.25
  2. Bacon Cheese Burger - $5.75
  3. Mushroom Swiss Burger - $5.95
  4. Western Burger - $5.95
  5. Don Cali Burger - $5.95
  0. End Order
  
  Choose a burger (0-5): 3
  Enter quantity: 5
  
  Choose a burger (0-5): 9
  Invalid option. Try again.
  
  Choose a burger (0-5): 5
  Enter quantity: 1
  
  Choose a burger (0-5): 0
  
  Are you a Student or Staff? stdu  udent
  
  ---- De Anza Food Court Bill ----
  Mushroom Swiss Burger x5 = $29.75
  Don Cali Burger x1 = $5.95
  
  Subtotal: $35.70
  Tax: $0.00
  Total: $35.70
*/
