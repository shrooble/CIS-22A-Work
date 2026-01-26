/*
  Victor Li
  Chapter 3: 2 - Stadium Seating

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double scoreOne, scoreTwo, scoreThree, scoreFour, scoreFive, averageScore;

  cout << "Enter 5 test scores with a space separation:\n";
  cin >> scoreOne << scoreTwo << scoreThree << scoreFour << scoreFive;

// This
  averageScore = (scoreOne + scoreTwo + scoreThree + scoreFour + scoreFive) / 5;

  cout << "The average test score is: " << fixed << setprecision(1) << averageScore << endl;
  
  return 0;
}
