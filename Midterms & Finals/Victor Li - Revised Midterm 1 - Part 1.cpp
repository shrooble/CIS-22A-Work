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

int main() {
  string burgerOne = "De Anza Burger", burgerTwo = "Bacon Cheese Burger", burgerThree = "Mushroom Swiss Burger", burgerFour = "Western Burger", burgerFive = "Don Cali Burger", userType;
  const double TAX_MULTIPLIER = 0.09, ONE_PRICE = 5.25, TWO_PRICE = 5.75, THREE_PRICE = 5.95, FOUR_PRICE = 5.95, FIVE_PRICE = 5.95;
  bool endOrder = false, staffUser = false, invalidUserType = true, continueOrder = false;
  int burgerChoice, amount, quantityTwo, quantityThree, quantityFour, quantityFive;
  double subtotal, taxAmount, total;
  char continueOrderChoice;

  cout << showpoint << fixed << setprecision(2);
  cout << burgerOne << " - $" << ONE_PRICE << endl;
  cout << burgerTwo << " - $" << TWO_PRICE << endl;
  cout << burgerThree << " - $" << THREE_PRICE << endl;
  cout << burgerFour << " - $" << FOUR_PRICE << endl;
  cout << burgerFive << " - $" << FIVE_PRICE << endl;
  cout << "End Order - 0\n";

// This loops the ordering menu until the user chooses to end the order (Entering 0)
  while (endOrder != true) { 
  // This loops if the user enters a non valid burger choice (Something not 0 - 5)
    while (burgerChoice > 5 || burgerChoice < 0) {
      cout << "\nChoose a burger from 1 - 5\n";
      cout << "Enter 0 if you want to end the order\n";
      cin >> burgerChoice;
    // This switch statement asks the user the quantity for the burger they chose
      switch (burgerChoice) {
      // This ends the entire order
        case 0:
          return 0;
          break;
        case 1:
          cout << "How many of " << burgerOne << " do you want to order:\n";
          cout << "Enter 0 to cancel\n";
          cin >> amount;
          quantityOne += amount;
        // This sends the user back to the while loop for (burgerChoice > 5 || burgerChoice < 0)
          if (amount == 0) {
            burgerChoice = -1;
          }
          break;
        case 2:
          cout << "How many of " << burgerTwo << " do you want to order:\n";
          cout << "Enter 0 to cancel\n";
          cin >> amount;
          quantityTwo += amount;
        // This sends the user back to the while loop for (burgerChoice > 5 || burgerChoice < 0)
          if (amount == 0) {
            burgerChoice = -1;
          }
          break;
        case 3:
          cout << "How many of " << burgerThree << " do you want to order:\n";
          cout << "Enter 0 to cancel\n";
          cin >> amount;
          quantityThree += amount;
        // This sends the user back to the while loop for (burgerChoice > 5 || burgerChoice < 0)
          if (amount == 0) {
            burgerChoice = -1;
          }
          break;
        case 4:
          cout << "How many of " << burgerFour << " do you want to order:\n";
          cout << "Enter 0 to cancel\n";
          cin >> amount;
          quantityFour += amount;
        // This sends the user back to the while loop for (burgerChoice > 5 || burgerChoice < 0)
          if (amount == 0) {
            burgerChoice = -1;
          }
          break;
        case 5:
          cout << "How many of " << burgerFive << " do you want to order:\n";
          cout << "Enter 0 to cancel\n";
          cin >> amount;
          quantityFive += amount;
        // This sends the user back to the while loop for (burgerChoice > 5 || burgerChoice < 0)
          if (amount == 0) {
            burgerChoice = -1;
          }
          break;
      }
    }
    
// This loop asks the user if they want to end the order by typing Y, or continuing by typing N
    while (continueOrder != true) {
      cout << "\nIs that all? (Y or N):\n";
      cin >> continueOrderChoice;
      if (continueOrderChoice == 'Y' || continueOrderChoice == 'y') {
          continueOrder = true;
          endOrder = true;
      }
      else if (continueOrderChoice == 'N' || continueOrderChoice == 'n') {
          continueOrder = true;
      }
      else {
        cout << "Invalid Option, type Y or N\n";
      }
    }
  }

// This loop ensures the user enters a valid user type (Staff or Student)
  while (invalidUserType != false) {
    cout << "\nAre you a student or staff?\n";
    cin >> userType;
  // This statement changes staffUser to true and invalidUserType to false, ending the while loop
    if (userType == "staff" || userType == "Staff") {
      staffUser = true;
      invalidUserType = false;
    }
  // This statement changes staffUser to false and invalidUserType to false, ending the while loop
    else if (userType == "student" || userType == "Student") {
      staffUser = false;
      invalidUserType = false;
    }
    else {
      cout << "Invalid Option - Type Student or Staff\n";
    }
  }

// This calculates the subtotal by the sum of each burger quantity multiplied by it's price
  subtotal = ((quantityOne * ONE_PRICE) + (quantityTwo * TWO_PRICE) + (quantityThree * THREE_PRICE) + (quantityFour * FOUR_PRICE) + (quantityFive * FIVE_PRICE));
// This only occurs if the user is a staff member
  if (staffUser) {
    taxAmount = subtotal * TAX_MULTIPLIER;
  }
// This calculates the total bill by the sum of the subtotal and the tax amount
  total = subtotal + taxAmount;

// This creates and opens a file named "output.txt"
  ofstream outFile("output.txt");
  
// This outputs a formatted bill to the console and file based on the burgers and quantities chosen
  cout <<   << "\nDe Anza Food Court Bill\n" << "----------------------\n";
  if (quantityOne > 0) {
    cout << "1 - " << burgerOne << "\nQuantity: " << quantityOne << "\nCost Per Item: " << ONE_PRICE << "\nItem Total: " << quantityOne * ONE_PRICE << endl;
    outFile << "1 - " << burgerOne << "\nQuantity: " << quantityOne << "\nCost Per Item: " << ONE_PRICE << "\nItem Total: " << quantityOne * ONE_PRICE << endl;
  }
  if (quantityTwo > 0) {
    cout << "\n2 - " << burgerTwo << "\nQuantity: " << quantityTwo << "\nCost Per Item: " << TWO_PRICE << "\nItem Total: " << quantityTwo * TWO_PRICE << endl;
    outFile << "\n2 - " << burgerTwo << "\nQuantity: " << quantityTwo << "\nCost Per Item: " << TWO_PRICE << "\nItem Total: " << quantityTwo * TWO_PRICE << endl;
  }
  if (quantityThree > 0) {
    cout << "\n3 - " << burgerThree << "\nQuantity: " << quantityThree << "\nCost Per Item: " << THREE_PRICE << "\nItem Total: " << quantityThree * THREE_PRICE << endl;
    outFile << "\n3 - " << burgerThree << "\nQuantity: " << quantityThree << "\nCost Per Item: " << THREE_PRICE << "\nItem Total: " << quantityThree * THREE_PRICE << endl;
  }
  if (quantityFour > 0) {
    cout << "\n4 - " << burgerFour << "\nQuantity: " << quantityFour << "\nCost Per Item: " << FOUR_PRICE << "\nItem Total: " << quantityFour * FOUR_PRICE << endl;
    outFile << "\n4 - " << burgerFour << "\nQuantity: " << quantityFour << "\nCost Per Item: " << FOUR_PRICE << "\nItem Total: " << quantityFour * FOUR_PRICE << endl;
  }
  if (quantityFive > 0) {
    cout << "\n5 - " << burgerFive << "\nQuantity: " << quantityFive << "\nCost Per Item: " << FIVE_PRICE << "\nItem Total: " << quantityFive * FIVE_PRICE << endl;
    outFile << "\n5 - " << burgerFive << "\nQuantity: " << quantityFive << "\nCost Per Item: " << FIVE_PRICE << "\nItem Total: " << quantityFive * FIVE_PRICE << endl;
  }
  cout << "\nBill Before Tax: " << subtotal << "\nTax Amount: " << taxAmount << "\nFinal Bill: " << total << endl;
  outFile << "\nBill Before Tax: " << subtotal << "\nTax Amount: " << taxAmount << "\nFinal Bill: " << total << endl;

// This closes the file
  outFile.close();
  
  return 0;
}

/*
Sample Output #1:
Sample Output #2:
*/
