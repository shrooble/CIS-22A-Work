/*
  Victor Li
  Chapter 3: 2 - Stadium Seating

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int classA = 15, classB = 12, classC = 9, ticketA, ticketB, ticketC, incomeGenerated;
  
  cout << "How many tickets of class A, B, or C tickets were sold?\n";
  cout << "Enter in order of A B C with each input separated, enter 0 if there were no tickets sold:\n";
  cin >> ticketA >> ticketB >> ticketC;

// This
  incomeGenerated = (ticketA * classA) + (ticketB * classB) + (ticketC * classC);

  cout << "The income generated from ticket sales is: $" << fixed << setprecision(2) << showpoint << incomeGenerated << endl;
  
  return 0;
}
