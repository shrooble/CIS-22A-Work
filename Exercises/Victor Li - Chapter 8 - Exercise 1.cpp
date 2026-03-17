/*
  Victor Li
  Chapter 8: Exercise 1
  
*/

#include <iostream>

using namespace std;

void arraySelectionSort(int (&arraySort)[arraySize],int);
void arrayBubbleSort(int (&arraySort)[arraySize],int);
void showValues(int array[], int); 
int linearArraySearch(int arraySearch[], int, int );
int binaryArraySearch(int arraySearch[], int, int );

int main() {
  int userValue, searchValue, arraySize, arrayIndex, sortValue;

  cout << "Enter the size of the array: ";
  cin >> arraySize;
  int userArray[arraySize];
  
  cout << "Enter the elements of the array for a size of " << arraySize << ", separated by spaces:\n";
  for (int i = 0; i < arraySize; ++i) {
    cin >> userArray[i];
  }
  
  while (sortValue == 1 || sortValue == 2) {
    cout << "Type 1 or 2 to choose between a 1 - Bubble or a 2 - Selection sort: ";
    cin >> sortValue;

    if (sortValue == 1) {
      arrayBubbleSort(userArray, arraySize);
    }
    else if (sortValue == 2) {
      arraySelectionSort(userArray, arraySize);
    }
  }
  
  showValues(userArray, arraySize);
  
  cout << "\n\nWhat value do you want to search for in the array: ";
  cin >> userValue;
  while (searchValue == 1 || searchValue == 2) {
    cout << "Type 1 or 2 to choose between a 1 - Linear or a 2 - Binary search: ";
    cin >> searchValue;

    if (searchValue == 1) {
      arrayIndex = linearArraySearch(userArray, userValue, arraySize);
    }
    else if (searchValue == 2) {
      arrayIndex = binaryArraySearch(userArray, userValue, arraySize);  
    }
  }
    
  if (arrayIndex != -1) {
    cout << "\nFound number " << userValue << " at position " << arrayIndex << " in the array\n";
  }
  else {
    cout << "\nDid not find number " << userValue << " in the array\n";
  }
  
  return 0;
}

void arrayBubbleSort(int (&arraySort)[arraySize], int arraySize) {
  
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
  int firstIndex = 0, middleIndex, lastIndex,  position = -1;
  bool foundValue = false;
  
  while (firstIndex <= lastIndex && !foundValue) {
    
    lastIndex = (arraySize - 1);
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
