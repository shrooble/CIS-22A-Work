/*
  Victor Li
  Chapter 8: Exercise 1
  
*/

#include <iostream>

using namespace std;

int userInput(int& userValue);
void showValues(int array[], int); 
int linearArraySearch(int arraySearch[], int, int );
int binaryArraySearch(int arraySearch[], int, int );
void arraySelectionSort();
void arrayBubbleSort();


int main() {
  int userValue, searchValue, arraySize = 0, arrayIndex;

  cout << "Enter the size of the array: ";
  cin >> arraySize;
  int userArray[arraySize];
  
  cout << "Enter the elements of the array for a size of " << arraySize << ", separated by spaces:\n";
  for (int i = 0; i < arraySize; ++i) {
    cin >> userArray[i];
  }
  
  showValues(userArray, arraySize);
  searchValue = userInput(userValue);
  
  if (searchValue == 1) {
    arrayIndex = linearArraySearch(userArray, userValue, arraySize);
  }
  else if (searchValue == 2) {
    arrayIndex = binaryArraySearch(userArray, userValue, arraySize);  
  }
  else {
    cout << "\nError\n";
  }
    
  if (arrayIndex != -1) {
    cout << "\nFound number " << userValue << " at position " << arrayIndex << " in the array\n";
  }
  else {
    cout << "\nDid not find number " << userValue << " in the array\n";
  }
  
  return 0;
}

int userInput(int &userValue) {
  char searchOption;
  cout << "\nWhat value do you want to search for in the array: ";
  cin >> userValue;
  while (true) {
    cout << "Type L or B to choose between a linear or binary search: ";
    cin >> searchOption;
    switch (searchOption) {
      case 'L':
      case 'l':
        return 1;
      break;
      case 'B':
      case 'b':
        return 2;
      break;
    }
  }
}

void showValues(int array[], int arraySize) {
  cout << "\nArray: ";
  for (int i = 0; i < arraySize; ++i) {
    cout << array[i] << " ";
  }
}

int linearArraySearch(int arraySearch[], int userValue, int arraySize) {
  int index = 0, position = -1;
  bool foundValue = false;
  
  while (index < arraySize && !foundValue) {
    if (arraySearch[index] == userValue) {
      position = index;
      foundValue = true;
    }
    ++index;
  }
  return position;
}

int binaryArraySearch(int arraySearch[], int userValue, int arraySize) {
  int firstIndex = 0, middleIndex, lastIndex = (arraySize - 1),  position = -1;
  bool foundValue = false;
  
  while (firstIndex <= lastIndex && !foundValue) {
    
    middleIndex = (firstIndex + lastIndex) / 2;
    
    if (arraySearch[middleIndex] == userValue) {
      foundValue = true;
      position = middleIndex;
    }
    else if (arraySearch[middleIndex] > userValue) {
      lastIndex = middleIndex - 1;
    }
    else {
      firstIndex = middleIndex + 1;
    }
  }
  return position;
}
