/*
  Victor Li
  Chapter 3: 5 - Male and Female Precentages
  This program determines the percentage of male and female students in a class
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int male, female, total;
  double malePercentage, femalePercentage;

  cout << "Enter the number of males and females in the class, the inputs should be separated by a space:\n";
  cin >> male >> female;

// This adds the number of male and female students to get the total number of students in a class
  total = male + female;

// This calculates the percentages for male and female students by dividing the male/female students by the number of total students respectfully and multiplying by 100 to get a percentage
  malePercentage = (male / total) * 100;
  femalePercentage = (female / total) * 100;

  cout << "The percentage of males in the class is: " << fixed << setprecision(2) << showpoint << malePercentage << "%\n";
  cout << "The percentage of females in the class is: " << femalePercentage << "%\n";
  
  return 0;
}
