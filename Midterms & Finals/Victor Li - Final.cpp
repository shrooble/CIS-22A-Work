/*
  Victor Li
  Team Name: Cat++
  Team Members: Kenny Nguyen
  This program provides a menu for 5 burgers from the De Anza College Food Court and outputs a formatted bill to both the console and an output file
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Global or shared data
double PRICE_ARRAY[5] = {5.25, 5.75, 5.95, 5.95, 5.95};
string BURGER_ARRAY[5] = {"De Anza Burger", "Bacon Cheese", "Mushroom Swiss", "Western Burger", "Don Cali Burger"};
int orderArray[5] = {0, 0, 0, 0, 0};

void displayMenu();
bool getInputs();
void calculate(bool);
void printBill();
void saveBillToFile();

int main()
{
    bool staffUser;
    
    displayMenu();
    staffUser = getInputs();
    calculate(staffUser);
    
    return 0;
}

// This function displays the burger names alongside their respective price
void displayMenu() {
    cout << fixed << showpoint << setprecision(2) << "---- De Anza Food Court ----\n";
    for (int i = 0; i < 5; ++i) {
        cout << (i + 1) << ". " << BURGER_ARRAY[i] << " - $" << PRICE_ARRAY[i] << endl;
    }
}

// This function gets the user's burger choice and the quantity for each burger
bool getInputs() {
    int burgerChoice, amount, userType;
    char orderCheck;
    bool ordering = true, correctOrder = false, correctUserChoice = false, staffUser = false;

// This loops until the user ends by order by pressing 0
    while (ordering) {
        correctOrder = false;
        cout << "\nChoose a burger (1 - 5):\n" << "Or enter 0 to end the order\n";
        cin >> burgerChoice;
        
    // This ends the ordering loop
        if (burgerChoice == 0) {
            ordering = false;
            continue;
        }
        
    // This ensures the user inputs a valid burger choice between 1 - 5, before asking for the burger amount
        else if (burgerChoice >= 1 && burgerChoice <= 5) {
            cout << "\nEnter quantity:\n" << "You may enter 0 to cancel your burger choice\n";
            cin >> amount;
            
        // This cancels the burger choice by making "burgerChoice" = -1, removing the user's burger choice input
            if (amount == 0) {
                burgerChoice = -1;
            }
        // This switch statement adds the amount to the respective burger
            else if (amount > 0) {
            // The burgerChoice -= 1 is to ensure it matches with the array's subscript
                burgerChoice -= 1;
                switch (burgerChoice) {
                    case 0:
                        orderArray[burgerChoice] += amount;
                        break; 
                    case 1:
                        orderArray[burgerChoice] += amount;
                        break;  
                    case 2:
                        orderArray[burgerChoice] += amount;
                        break;  
                    case 3:
                        orderArray[burgerChoice] += amount;
                        break;  
                    case 4:
                        orderArray[burgerChoice] += amount;
                        break;  
                }
            }
            else {
                cout << "\nInvalid amount, try again\n";
                continue;
            }
        }
        else {
            cout << "\nInvalid burger choice, try again\n";
            continue;
        }
        
    // This loop ensures the user enters Y or N, printing out the amount of each respective burger ordered
        while (!correctOrder) {
            cout << "\nIs your order correct - Y or N:\n";
            for (int i = 0; i < 5; ++i) {
                if (orderArray[i] != 0) {
                    cout << orderArray[i] << "x - " << BURGER_ARRAY[i] << endl;        
                }
            }
            cin >> orderCheck;
            switch (orderCheck) {
                case 'Y':
                case 'y':
                    ordering = false;
                    correctOrder = true;
                    break;
                case 'N':
                case 'n':
                // This for loop resets the ordering array to 0
                    for (int i = 0; i < 5; ++i) {
                        if (orderArray[i] != 0) {
                            orderArray[i] = 0;        
                        }
                    }
                    correctOrder = true;
                    break;
                default:
                    cout << "\nInvalid choice, enter Y or N\n";
                    break;
            }
        }
    }
    
// This for loop checks whether the user ordered anything, writing out an ending message 
    for (int i = 0; i < 5; ++i) {
        if (orderArray[i] != 0) {
            break;      
        }
        else {
            cout << "\nNo burgers ordered - ending program\n";
            break;
        }
    }  

    while (!correctUserChoice) {
        cout << "\nPress 1 if you are a student, otherwise press 2 if you are a staff member: ";
        cin >> userType;
        switch (userType) {
            case 1:
                staffUser = false;
                correctUserChoice = true;
                break;
            case 2:
                staffUser = true;
                correctUserChoice = true;
                break;
            default:
                cout << "\nInvalid choice - enter 1 for student or 2 for staff\n";
                break;
        }
    }
    return staffUser;
}
