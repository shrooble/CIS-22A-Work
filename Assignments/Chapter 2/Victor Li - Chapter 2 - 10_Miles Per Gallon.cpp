/*
  Victor Li
  Chapter 2: Miles Per Gallon
  This program calculates the miles per gallon of a car that can drive 375 miles on 15 gallons of gasoline
*/  

#include <iostream>

using namespace std;

int main()
{
  double gasoline = 15.0, distance = 375.0, milesGal;

// This calculates the miles per gallon by dividing the distance the car can travel by the amount of gasoline
  milesGal = distance / gasoline;
  
  cout << "The miles per gallon of the car is: " << milesGal << endl;
  
  return 0;
}
