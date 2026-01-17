/*
  Victor Li
  Chapter 2: Cyborg Data Type Sizes
  This program outputs the amount of memory char, int, float, and double will use
*/

#include <iostream>

using namespace std;

int main()
{

  cout << "The amount of memory char will use is: " << sizeof(char) << "." << endl;
  cout << "The amount of memory int will use is: " << sizeof(int) << "." << endl;
  cout << "The amount of memory float will use is: " << sizeof(float) << "." << endl;
  cout << "The amount of memory double will use is: " << sizeof(double) << "." << endl;
  
  return 0;
}
