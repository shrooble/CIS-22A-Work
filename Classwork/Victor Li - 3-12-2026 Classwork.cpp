/*
  Victor Li
  3/12/2026 Classwork
  Creating, Printing, and Comparing Arrays
*/

#include <iostream>

using namespace std;

int main() {
  int arraySize, arraySum, lowest, highest, count = 0;
  bool equalArrays = true;

// This asks the user for the array size
  cout << "Enter the size for both arrays: " << endl;
  cin >> arraySize;
  int firstArray[arraySize], secondArray[arraySize];
    
// This asks the user to input each number in both arrays
  cout << "Enter " << arraySize << " numbers to put into the first array: " << endl;
  for (int i = 0; i < arraySize; ++i) {
    cin >> firstArray[i];
  }
  cout << "Enter " << arraySize << " numbers to put into the second array: " << endl;
  for (int i = 0; i < arraySize; ++i) {
    cin >> secondArray[i];
  }

// This assigns lowest and highest to the first number in the first array
  lowest = firstArray[0];
  highest = firstArray[0];

// This loop prints each number in the first array using a reguler for loop
  cout << "\nUsing a regular for loop (First Array): ";
  for (int i = 0; i < arraySize; ++i) {
    cout << firstArray[i] << " ";
  }
    
// This loop prints each number in the first array using a range based for loop
  cout << "\nUsing a ranged based for loop (First Array): ";
  for (int value : firstArray) {
    cout << value << " ";
  }

// This loop finds the sum, alongside the lowest and highest numbers in the first array
  for (int i = 0; i < arraySize; ++i) {
    arraySum += firstArray[i];
    
    if (firstArray[i] > highest) {
      highest = firstArray[i];
    }
    if (firstArray[i] < lowest) {
      lowest = firstArray[i];
    }
  }
  
  cout << "\n\nThe sum of the first array is: " << arraySum << endl;
  cout << "The average of the first array is: " << arraySum / arraySize << endl;
  cout << "\nThe highest number of the first array is: " << highest << endl;
  cout << "The lowest of the first array is: " << lowest << endl;

// This loop checks if the first and second arrays are equal to each other
  while (equalArrays && count < arraySize) {
    if (firstArray[count] != secondArray[count]) {
        equalArrays = false;
    }
    ++count;
  }
  
  if (equalArrays) {
    cout << "\nThe first and second arrays are equal\n";
  }
  else {
    cout << "\nThe first and second arrays are not equal\n";
  }
  
  return 0;
}
