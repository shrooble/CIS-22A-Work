/*
  Victor Li
  Chapter 2: Cyborg Data Type Sizes
  This program outputs the amount of memory the variabels char, int, float, and double will use
*/

#include <iostream>

using namespace std;

int main()
{

  cout << "The amount of memory the char variable will use is " << sizeof(char) << " bytes." << endl;
  cout << "The amount of memory the int variable will use is " << sizeof(int) << " bytes." << endl;
  cout << "The amount of memory the float variable will use is " << sizeof(float) << " bytes." << endl;
  cout << "The amount of memory the double variable will use is " << sizeof(double) << " bytes." << endl;
  
  return 0;
}
