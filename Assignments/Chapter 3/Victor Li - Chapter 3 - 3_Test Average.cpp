/*
  Victor Li
  Chapter 3: 3 - Test Average
  This program determines the average test score of 5 user inputted test scores
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double scoreOne, scoreTwo, scoreThree, scoreFour, scoreFive, averageScore;

  cout << "Enter 5 test scores with a space separation between each input:\n";
  cin >> scoreOne << scoreTwo << scoreThree << scoreFour << scoreFive;

// This calculates the average test score by getting the sum of the five test scores before dividing it by 5
  averageScore = (scoreOne + scoreTwo + scoreThree + scoreFour + scoreFive) / 5;

  cout << "The average test score is: " << fixed << setprecision(1) << showpoint << averageScore << endl;
  
  return 0;
}
