/*
  Victor Li
  Team Name: Cat++
  Team Members: Kenny Nguyen
  This program provides a menu for 5 burgers from the De Anza College Food Court and outputs a formatted bill to both the console and an output file
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

double PRICE_ARRAY[ARRAY_SIZE] = {5.25, 5.75, 5.95, 5.95, 5.95};
string BURGER_ARRAY[ARRAY_SIZE] = {"De Anza Burger", "Bacon Cheese", "Mushroom Swiss", "Western Burger", "Don Cali Burger"};
int ARRAY_SIZE = 5, orderArray[ARRAY_SIZE] = {0, 0, 0, 0, 0};

void displayMenu();
void getInputs(int (&orderArray)[ARRAY_SIZE], bool &staffUser = false);
void calculate();
void printBill();
void saveBillToFile();

int main() {
  displayMenu();
  getInputs(int (&orderArray)[ARRAY_SIZE], bool &staffUser);
  calculate();
  printBill();
  saveBillToFile();
  
  return 0;
}

void displayMenu() {
  cout << fixed << showpoint << setprecision(2);
  cout << "---- De Anza Food Court ----\n";
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    cout << (i+1) << ". " << BURGER_ARRAY[i] << " - $" << PRICE_ARRAY[i];
  }
}

void getInputs(int (&orderArray)[ARRAY_SIZE], bool staffUser) {
  int burgerChoice, burgerQuantity;
  bool endOrder = false;

// This loops the ordering menu until the user chooses to end the order (Entering 0)
  while (!endOrder) {
    cout << "Choose a burger from the menu (1 - 5):\n";
    cout << "Or enter 0 to exit\n";
    cin >> burgerChoice;
  // This ends the entire order and exits the ordering loop
    if (burgerChoice == 0) {
      endOrder = true;
    }
    else if (burgerChoice >= 1 && burgerChoice <= 5) {
      cout << "Enter the quantity:\n";
      cin >> burgerQuantity;
    // This ensures the burgerChoice matches with the orderArray
      burgerChoice -= 1;
      switch (burgerChoice) {
        case 0: 
          cout << "How many of " << BURGER_ARRAY[burgerChoice] << " do you want to order:\n";
          cout << "Enter 0 to cancel\n";
          cin >> burgerQuantity;
        // This sends the user back to the while loop for (burgerChoice > 5 || burgerChoice < 0)
          if (burgerQuantity == 0) {
            burgerChoice = -1;
          }    
          BURGER_ARRAY[burgerChoice] += burgerQuantity;
        break;
        
        case 1:
          cout << "How many of " << BURGER_ARRAY[burgerChoice] << " do you want to order:\n";
          cout << "Enter 0 to cancel\n";
          cin >> burgerQuantity;
        // This sends the user back to the while loop for (burgerChoice > 5 || burgerChoice < 0)
          if (burgerQuantity == 0) {
            burgerChoice = -1;
          }    
          BURGER_ARRAY[burgerChoice] += burgerQuantity;
          break;
        
        case 2:
          cout << "How many of " << BURGER_ARRAY[burgerChoice] << " do you want to order:\n";
          cout << "Enter 0 to cancel\n";
          cin >> burgerQuantity;
        // This sends the user back to the while loop for (burgerChoice > 5 || burgerChoice < 0)
          if (burgerQuantity == 0) {
            burgerChoice = -1;
          }    
          BURGER_ARRAY[burgerChoice] += burgerQuantity;
          break;
        
        case 3:
          cout << "How many of " << BURGER_ARRAY[burgerChoice] << " do you want to order:\n";
          cout << "Enter 0 to cancel\n";
          cin >> burgerQuantity;
        // This sends the user back to the while loop for (burgerChoice > 5 || burgerChoice < 0)
          if (burgerQuantity == 0) {
            burgerChoice = -1;
          }    
          BURGER_ARRAY[burgerChoice] += burgerQuantity;
          break;
        
        case 4:
          cout << "How many of " << BURGER_ARRAY[burgerChoice] << " do you want to order:\n";
          cout << "Enter 0 to cancel\n";
          cin >> burgerQuantity;
        // This sends the user back to the while loop for (burgerChoice > 5 || burgerChoice < 0)
          if (burgerQuantity == 0) {
            burgerChoice = -1;
          }    
          BURGER_ARRAY[burgerChoice] += burgerQuantity;
          break;
        
        case 5:
          cout << "How many of " << BURGER_ARRAY[burgerChoice] << " do you want to order:\n";
          cout << "Enter 0 to cancel\n";
          cin >> burgerQuantity;
        // This sends the user back to the while loop for (burgerChoice > 5 || burgerChoice < 0)
          if (burgerQuantity == 0) {
            burgerChoice = -1;
          }    
          BURGER_ARRAY[burgerChoice] += burgerQuantity;
        break;
        
        default:
          cout << "Invalid Option. Try Again.\n";
          burgerChoice = -1;
        break;
      }
    }
    else {
      cout << "Invalid Option. Try Again.\n";
    }
  }
}

void calculate() {
  
}

void printBill() {
}

void saveBillToFile() {
  int fileNumber;

// This randomizes the file number from 1000 - 2000 based on the user's time
  srand(time(0));
  fileNumber = rand() % 1001 + 1000;
// This creates and opens a file named "output.txt"
  ofstream outFile("output.txt");
  

  
}
