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
const double TAX_RATE = 0.09;

void displayMenu();
bool getInputs();
double calculate(bool, double&, double&);
void printBill(double, double, double);
void saveBillToFile(double, double, double);

int main()
{
    double subtotal, total, taxAmount = 0.0;
    bool staffUser;
    
    displayMenu();
    staffUser = getInputs();
    total = calculate(staffUser, subtotal, taxAmount);
    printBill(total, subtotal, taxAmount);
    saveBillToFile(total, subtotal, taxAmount);
    
    return 0;
}

// This function displays the burger names alongside their respective price
void displayMenu() {
    cout << fixed << showpoint << setprecision(2) << "---- De Anza Food Court ----\n";
    for (int i = 0; i < 5; ++i) {
        cout << (i + 1) << ". " << BURGER_ARRAY[i] << " - $" << PRICE_ARRAY[i] << endl;
    }
}

// This function gets the user's burger order, each burger quantity, and asks whether they are a student or staff
bool getInputs() {
    int burgerChoice, amount, userType;
    char orderCheck;
    bool ordering = true, correctOrder = true, correctUserChoice = false, staffUser = false, nullOrder = true;

// This loops until the user ends by order by pressing 0
    while (ordering) {
        cout << "\nChoose a burger (1 - 5):\n" << "Or enter 0 to end the order\n";
        cin >> burgerChoice;
        
    // This ends the ordering loop
        if (burgerChoice == 0) {
        // This for loop checks whether the user ordered anything, writing out an ending message 
            for (int arrayElement : orderArray) {
                if (arrayElement > 0) {
                    nullOrder = false;
                    correctOrder = false;
                }
            }  

        // This checks if the user ended the program without ordering anything
            if (nullOrder) {
                cout << "\nNo burger has been ordered - Ending program\n";
                ordering = false;
            }
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
            // The burgerChoice -= 1 is done to ensure it matches with the array's subscript
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
    

        
    // This loop ensures the user enters Y or N, printing out the amount of each respective burger ordered and burger name
        while (!correctOrder) {
            cout << "\nIs your order correct - Y or N:\n";
            for (int i = 0; i < 5; ++i) {
                if (orderArray[i] != 0) {
                    cout << BURGER_ARRAY[i] << " - " << orderArray[i] << "x = $" << PRICE_ARRAY[i] << endl;        
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
                // This for loop resets the ordering array to 0, before returning to the ordering loop
                    for (int i = 0; i < 5; ++i) {
                        if (orderArray[i] != 0) {
                            orderArray[i] = 0;        
                        }
                    }
                    correctOrder = true;
                    nullOrder = true;
                    cout << "\nOrder has been reset\n";
                    break;
                default:
                    cout << "\nInvalid choice, enter Y or N\n";
                    break;
            }
        }
    }
    

    
    
    
    

    
// This loop checks if the user is a student or staff, ensuring they press 1 or 2
    while (!correctUserChoice && !nullOrder) {
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
    
// This returns a bool to the calculate function (in main())
    return staffUser;
}

// This function calculates the user's order, including tax for staff members
double calculate(bool staffUser, double &subtotal, double &taxAmount) {
    double total = 0.0;
    
// This loop multiplies the ordered burgers by their respective price and adding it to the subtotal
    for (int i = 0; i < 5; ++i) {
        if (orderArray[i] != 0) {
            subtotal = subtotal + (orderArray[i] * PRICE_ARRAY[i]);   
        }
    }
    
// If the user is staff, the tax amount is the product of the subtotal and the tax rate (9%)
    if (staffUser) {
        taxAmount = subtotal * TAX_RATE;
    }
    
// The total is the sum of the subtotal and tax amount
    total = subtotal + taxAmount;
    
// The total is returned to the printBill and saveBillToFile functions (in main())
    return total;
}

// This function outputs the final bill to the console
void printBill(double total, double subtotal, double taxAmount) {
    cout << "\n---- De Anza Food Court Bill ----\n";
    
    cout << "\nSubtotal: $" << subtotal;
    cout << "\nTax Amount: $" << taxAmount;
    cout << "\nTotal: $" << total;
}

// This function saves the final bill to a file with a random document number
void saveBillToFile(double total, double subtotal, double taxAmount) {
    
}
