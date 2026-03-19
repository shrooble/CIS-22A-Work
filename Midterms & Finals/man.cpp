/*
Name: Your Name
Program Description:
This program simulates a food ordering system for the De Anza College Food Court.
It displays a menu, allows the user to order burgers, calculates totals with or
without tax (student/staff), prints a formatted bill, and saves the bill to a
randomly named text file.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

// ------------------ GLOBAL DATA ------------------
double PRICE_ARRAY[5] = {5.25, 5.75, 5.95, 5.95, 5.95};
string BURGER_ARRAY[5] = {
    "De Anza Burger",
    "Bacon Cheese",
    "Mushroom Swiss",
    "Western Burger",
    "Don Cali Burger"
};
int orderArray[5] = {0, 0, 0, 0, 0};

// ------------------ FUNCTION PROTOTYPES ------------------
void displayMenu();
void getInputs();
void calculate(double &subtotal, double &tax, double &total, bool isStudent);
void printBill(double subtotal, double tax, double total);
void saveBillToFile(double subtotal, double tax, double total);

// ------------------ MAIN ------------------
int main() {
    srand(time(0));

    displayMenu();
    getInputs();

    bool isStudent;
    char type;
    cout << "\nAre you a Student (S) or Staff (T)? ";
    cin >> type;

    if (type == 'S' || type == 's')
        isStudent = true;
    else
        isStudent = false;

    double subtotal, tax, total;
    calculate(subtotal, tax, total, isStudent);

    printBill(subtotal, tax, total);
    saveBillToFile(subtotal, tax, total);

    return 0;
}

// ------------------ FUNCTION DEFINITIONS ------------------

void displayMenu() {
    cout << "================= DE ANZA FOOD COURT MENU =================\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << BURGER_ARRAY[i]
             << " - $" << fixed << setprecision(2) << PRICE_ARRAY[i] << endl;
    }
    cout << "============================================================\n";
}

void getInputs() {
    int choice, qty;

    while (true) {
        cout << "\nEnter item number to order (1-5), or 0 to finish: ";
        cin >> choice;

        if (choice == 0)
            break;

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Try again.\n";
            continue;
        }

        cout << "How many " << BURGER_ARRAY[choice - 1] << "? ";
        cin >> qty;

        if (qty < 0) {
            cout << "Invalid quantity.\n";
            continue;
        }

        orderArray[choice - 1] += qty;
    }
}

void calculate(double &subtotal, double &tax, double &total, bool isStudent) {
    subtotal = 0;

    for (int i = 0; i < 5; i++) {
        subtotal += orderArray[i] * PRICE_ARRAY[i];
    }

    if (isStudent)
        tax = 0;
    else
        tax = subtotal * 0.09;

    total = subtotal + tax;
}

void printBill(double subtotal, double tax, double total) {
    cout << "\n======================== YOUR BILL ========================\n";

    for (int i = 0; i < 5; i++) {
        if (orderArray[i] > 0) {
            cout << BURGER_ARRAY[i] << " x " << orderArray[i]
                 << " = $" << fixed << setprecision(2)
                 << orderArray[i] * PRICE_ARRAY[i] << endl;
        }
    }

    cout << "------------------------------------------------------------\n";
    cout << "Subtotal: $" << fixed << setprecision(2) << subtotal << endl;
    cout << "Tax:      $" << fixed << setprecision(2) << tax << endl;
    cout << "Total:    $" << fixed << setprecision(2) << total << endl;
    cout << "============================================================\n";
}

void saveBillToFile(double subtotal, double tax, double total) {
    int randNum = rand() % 1001 + 1000; // 1000–2000
    string fileName = to_string(randNum) + ".txt";

    ofstream out(fileName.c_str());

    out << "======================== YOUR BILL ========================\n";
    for (int i = 0; i < 5; i++) {
        if (orderArray[i] > 0) {
            out << BURGER_ARRAY[i] << " x " << orderArray[i]
                << " = $" << fixed << setprecision(2)
                << orderArray[i] * PRICE_ARRAY[i] << endl;
        }
    }

    out << "------------------------------------------------------------\n";
    out << "Subtotal: $" << fixed << setprecision(2) << subtotal << endl;
    out << "Tax:      $" << fixed << setprecision(2) << tax << endl;
    out << "Total:    $" << fixed << setprecision(2) << total << endl;
    out << "============================================================\n";

    out.close();

    cout << "\nBill saved to file: " << fileName << endl;
}
