/*
  Victor Li
  Chapter 2: Distance Per Tank of Gas
  This program calculates and outputs the distance the car can travel in the town and highway on 20 gallons of gasoline
*/

#include <iostream>

using namespace std;

int main()
{
  double gallons = 20, townMiles = 23.5, highwayMiles = 28.9, distanceTown, distanceHighway;

  distanceTown = gallons * townMiles;
  distanceHighway = gallons * highwayMiles;
  
  cout << "The distance the car can travel in the town is " << distanceTown << "." << endl;
  cout << "The distance the car can travel on the highway is " << distanceHighway << "." << endl;

  return 0;
}
