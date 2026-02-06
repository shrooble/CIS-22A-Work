/*
  Victor Li
  Chapter 4: 6 - Mass And Weight
  This program checks the weight of an object and outputs the weight and whether it is too light or too heavy
*/

#include <iostream>

using namespace std;

int main() {
  double mass, weight;
  
// This finds the weight by the product of the mass and 9.8
  weight = mass * 9.8;

// This checks whether the weight is less than 10 N (Noninclusive)
  if (weight < 10) {
    cout << "\nObject Weight: " << weight << " N, Too Light\n";
  }
// This checks whether the weight is between 10 N and 1000 N (Inclusive)
  else if (weight <= 1000) {
    cout << "\nObject Weight: " << weight << " N\n";
  }
// This checks whether the weight is more than 1000 N (Noninclusive)
  else if (weight > 1000) {
    cout << "\nObject Weight: " << weight << " N, Too Heavy\n";
  }
  else {
    cout << "\nInvalid Inputs\n";
  }

  return 0;
}
