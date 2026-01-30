/*
  Victor Li
  Team Name: Cat++
  Team Members: Kenny Nguyen
  Chapter 3: 7 - Box Office
  This program calculates the gross profit, net profit, and amount paid to distributor based on movie ticket sales 
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  double grossProfit, netProfit, distributorPay, theaterPercent = 0.20;
  int adultTickets, childTickets, adultPrice = 10, childPrice = 6;
  string movieName;

  cout << "What is the movie name:\n";
  getline(cin, movieName);
  cout << "How many adult tickets were sold:\n";
  cin >> adultTickets;
  cout << "How many child tickets were sold:\n";
  cin >> childTickets;

// This calculates the gross profit from ticket sales by multiplying the ticket amounts with the ticket prices 
  grossProfit = (adultTickets * adultPrice) + (childTickets * childPrice);
  
// This calculates the net profit by multiplying the gross profit with the theater percentage
  netProfit = grossProfit * theaterPercent;
  
// This calculates the amount paid to the movie distributer by subtracting the gross profit from the net profit
  distributorPay = grossProfit - netProfit;

  cout << "\nMovie Name: \"" << movieName << "\"" << endl;
  cout << "Adult Tickets Sold: " << adultTickets << endl;
  cout << "Child Tickets Sold: " << childTickets << endl;
  cout << "Gross Box Office Profit: $" << fixed << setprecision(2) << showpoint << grossProfit << endl;
  cout << "Net Box Office Profit: $" << netProfit << endl;
  cout << "Amount Paid to Distributor: $" << distributorPay << endl;
  
  return 0;
}
