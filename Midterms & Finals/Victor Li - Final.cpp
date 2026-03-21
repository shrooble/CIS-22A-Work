/*
  Victor Li
  Team Name: Cat++
  Team Members: Kenny Nguyen

  Final Part 1
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

// This loops until the user ends by order by pressing 0, alongside other factors
    while (ordering) {
        cout << "\nChoose a burger (1 - 5):\n" << "Or enter 0 to end the order\n";
        cin >> burgerChoice;
        
    // This ends the ordering loop
        if (burgerChoice == 0) {
        // This for loop checks whether the user ordered anything
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
            
        // This cancels the burger choice by making "burgerChoice" = -1, removing the user's previous burger choice input
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
                    cout << BURGER_ARRAY[i] << " - " << orderArray[i] << "x = $" << (PRICE_ARRAY[i] * orderArray[i]) << endl;        
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
    
    for (int i = 0; i < 5; ++i) {
        if (orderArray[i] > 0) {
            cout << BURGER_ARRAY[i] << " - " << orderArray[i] << "x = $" << (PRICE_ARRAY[i] * orderArray[i]) << endl;
        }
    }
    cout << "\nSubtotal: $" << subtotal;
    cout << "\nTax Amount: $" << taxAmount;
    cout << "\nTotal: $" << total;
}

// This function saves the final bill to a file with a random document number
void saveBillToFile(double total, double subtotal, double taxAmount) {
    int documentNumber;
    string fileName;

// This creates a random number between 1000 and 2000 based on the user's time
    srand(time(0));
    documentNumber = rand() % 1001 + 1000; 
    
// This creates and opens a file with the document number as the file's name
    fileName = to_string(documentNumber) + ".txt";
    ofstream outFile(fileName);
    
    outFile << "---- De Anza Food Court Bill ----\n";
    outFile << fixed << showpoint << setprecision(2);
    
    for (int i = 0; i < 5; ++i) {
        if (orderArray[i] > 0) {
            outFile << BURGER_ARRAY[i] << " - " << orderArray[i] << "x = $" << (PRICE_ARRAY[i] * orderArray[i]) << endl;
        }
    }
    outFile << "\nSubtotal: $" << subtotal;
    outFile << "\nTax Amount: $" << taxAmount;
    outFile << "\nTotal: $" << total;
}

/*
Sample Output #1:
    ---- De Anza Food Court ----
    1. De Anza Burger - $5.25
    2. Bacon Cheese - $5.75
    3. Mushroom Swiss - $5.95
    4. Western Burger - $5.95
    5. Don Cali Burger - $5.95
    
    Choose a burger (1 - 5):
    Or enter 0 to end the order
    1
    
    Enter quantity:
    You may enter 0 to cancel your burger choice
    0
    
    Choose a burger (1 - 5):
    Or enter 0 to end the order
    2
    
    Enter quantity:
    You may enter 0 to cancel your burger choice
    1
    
    Choose a burger (1 - 5):
    Or enter 0 to end the order
    0
    
    Is your order correct - Y or N:
    Bacon Cheese - 1x = $5.75
    n
    
    Order has been reset
    
    Choose a burger (1 - 5):
    Or enter 0 to end the order
    2
    
    Enter quantity:
    You may enter 0 to cancel your burger choice
    2
    
    Choose a burger (1 - 5):
    Or enter 0 to end the order
    0
    
    Is your order correct - Y or N:
    Bacon Cheese - 2x = $11.50
    y
    
    Press 1 if you are a student, otherwise press 2 if you are a staff member: 2
    
    ---- De Anza Food Court Bill ----
    Bacon Cheese - 2x = $11.50
    
    Subtotal: $11.50
    Tax Amount: $1.03
    Total: $12.54
    
Sample Output #2:
    ---- De Anza Food Court ----
    1. De Anza Burger - $5.25
    2. Bacon Cheese - $5.75
    3. Mushroom Swiss - $5.95
    4. Western Burger - $5.95
    5. Don Cali Burger - $5.95
    
    Choose a burger (1 - 5):
    Or enter 0 to end the order
    6
    
    Invalid burger choice, try again
    
    Choose a burger (1 - 5):
    Or enter 0 to end the order
    1
    
    Enter quantity:
    You may enter 0 to cancel your burger choice
    -1
    
    Invalid amount, try again
    
    Choose a burger (1 - 5):
    Or enter 0 to end the order
    1
    
    Enter quantity:
    You may enter 0 to cancel your burger choice
    1
    
    Choose a burger (1 - 5):
    Or enter 0 to end the order
    0
    
    Is your order correct - Y or N:
    De Anza Burger - 1x = $5.25
    a
    
    Invalid choice, enter Y or N
    
    Is your order correct - Y or N:
    De Anza Burger - 1x = $5.25
    y
    
    Press 1 if you are a student, otherwise press 2 if you are a staff member: 3
    
    Invalid choice - enter 1 for student or 2 for staff
    
    Press 1 if you are a student, otherwise press 2 if you are a staff member: 1
    
    ---- De Anza Food Court Bill ----
    De Anza Burger - 1x = $5.25
    
    Subtotal: $5.25
    Tax Amount: $0.00
    Total: $5.25

(I included this to show what happens when the user prematurely presses 0 at the beginning)
Sample Output #3:
    ---- De Anza Food Court ----
    1. De Anza Burger - $5.25
    2. Bacon Cheese - $5.75
    3. Mushroom Swiss - $5.95
    4. Western Burger - $5.95
    5. Don Cali Burger - $5.95
    
    Choose a burger (1 - 5):
    Or enter 0 to end the order
    0
    
    No burger has been ordered - Ending program
    
    ---- De Anza Food Court Bill ----
    
    Subtotal: $0.00
    Tax Amount: $0.00
    Total: $0.00
*/
