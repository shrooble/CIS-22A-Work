/*
  Team Name: Cat++
  Team Members: Kenny Nguyen
  This program provides a menu for 5 burgers from the De Anza College Food Court
  and outputs a formatted bill to both the console and an output file
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {

    // Burger names
    string burgerOne = "De Anza Burger";
    string burgerTwo = "Bacon Cheese Burger";
    string burgerThree = "Mushroom Swiss Burger";
    string burgerFour = "Western Burger";
    string burgerFive = "Don Cali Burger";

    // Prices
    const double TAX_RATE = 0.09;
    const double ONE_PRICE = 5.25;
    const double TWO_PRICE = 5.75;
    const double THREE_PRICE = 5.95;
    const double FOUR_PRICE = 5.95;
    const double FIVE_PRICE = 5.95;

    // Quantities
    int quantityOne = 0, quantityTwo = 0, quantityThree = 0,
        quantityFour = 0, quantityFive = 0;

    int burgerChoice, amount;
    string userType;
    double subtotal = 0, taxAmount = 0, total = 0;
    bool ordering = true;
    bool staffUser = false;

    cout << fixed << showpoint << setprecision(2);

    // MENU
    cout << "---- De Anza Food Court ----\n";
    cout << "1. " << burgerOne << " - $" << ONE_PRICE << endl;
    cout << "2. " << burgerTwo << " - $" << TWO_PRICE << endl;
    cout << "3. " << burgerThree << " - $" << THREE_PRICE << endl;
    cout << "4. " << burgerFour << " - $" << FOUR_PRICE << endl;
    cout << "5. " << burgerFive << " - $" << FIVE_PRICE << endl;
    cout << "0. End Order\n";

    // ORDER LOOP
    while (ordering) {
        cout << "\nChoose a burger (0-5): ";
        cin >> burgerChoice;

        if (burgerChoice == 0) {
            ordering = false;
        }
        else if (burgerChoice >= 1 && burgerChoice <= 5) {
            cout << "Enter quantity: ";
            cin >> amount;

            switch (burgerChoice) {
                case 1: quantityOne += amount; break;
                case 2: quantityTwo += amount; break;
                case 3: quantityThree += amount; break;
                case 4: quantityFour += amount; break;
                case 5: quantityFive += amount; break;
            }
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    // USER TYPE
    while (true) {
        cout << "\nAre you a Student or Staff? ";
        cin >> userType;

        if (userType == "Staff" || userType == "staff") {
            staffUser = true;
            break;
        }
        else if (userType == "Student" || userType == "student") {
            break;
        }
        else {
            cout << "Invalid input.\n";
        }
    }

    // CALCULATE SUBTOTAL
    subtotal =
        quantityOne * ONE_PRICE +
        quantityTwo * TWO_PRICE +
        quantityThree * THREE_PRICE +
        quantityFour * FOUR_PRICE +
        quantityFive * FIVE_PRICE;

    if (staffUser)
        taxAmount = subtotal * TAX_RATE;

    total = subtotal + taxAmount;

    ofstream outFile("output.txt");

    // BILL HEADER
    cout << "\n---- De Anza Food Court Bill ----\n";
    outFile << "---- De Anza Food Court Bill ----\n";

    // PRINT ITEMS
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
