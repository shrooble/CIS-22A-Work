/*
  Victor Li
  Chapter 4: 6 - Mass And Weight

*/

#include <iostream>

using namespace std;

int main() {
  double mass, weight;

  weight = mass * 9.8;

  if (weight < 10) {
    cout << "\nObject Weight: " << weight << " N, Too Light\n";
  }
  else if (weight <= 1000) {
    cout << "\nObject Weight: " << weight << " N\n";
  }
  else if (weight > 1000) {
    cout << "\nObject Weight: " << weight << " N, Too Heavy\n";
  }
  else {
    cout << "\nInvalid Inputs\n";
  }

  
  return 0;
}
