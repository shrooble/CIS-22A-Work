/*
  Victor Li
  Chapter 8: Exercise 1
  This program prompts the user for an array, sorts the array via the user's choice of bubble sort or selection sort, then searches the 
  array for a number via the user's choice of a linear search or binary search
*/

#include <iostream>

using namespace std;

void arraySelectionSort(int arraySort[],int);
void arrayBubbleSort(int arraySort[],int);
void showValues(int array[], int, int ); 
int linearArraySearch(int arraySearch[], int, int );
int binaryArraySearch(int arraySearch[], int, int );
void swap(int&, int&);

int main() {
  int userValue, searchValue = 0, arraySize = 0, arrayIndex, sortValue = 0;
  bool validSort = false, validSearch = false;

// This while loop ensures the user puts a valid array size greater than 0
  while (arraySize <= 0) {
    cout << "Enter the size of the array, that is greater than 0: ";
    cin >> arraySize;
  }
  
  int userArray[arraySize];
  
  cout << "Enter the elements of the array for a size of " << arraySize << ", separated by spaces:\n";
  for (int i = 0; i < arraySize; ++i) {
    cin >> userArray[i];
  }
  
// This shows the unsorted or sorted array
  showValues(userArray, arraySize, sortValue);
  
  cout << "\n\nA bubble sort is easily understandable and implementable, passing through the array and swapping each element until it's sorted\n";
  cout << "However, it is slow for large arrays\n";
  cout << "A selection sort is more efficient than a bubble sort since it swaps the next smallest array with the next index\n";
  cout << "However, it is harder to understand compared to a bubble sort\n";
  
// This loop ensures the user enters 1 or 2 for the sort selection
  while (!validSort) {
    cout << "\nType 1 or 2 to choose between a 1 - Bubble or a 2 - Selection sort: ";
    cin >> sortValue;

// The array is sorted via a bubble sort
    if (sortValue == 1) {
      arrayBubbleSort(userArray, arraySize);
      validSort = true;
    }
// The array is sorted via a selection sort
    else if (sortValue == 2) {
      arraySelectionSort(userArray, arraySize);
      validSort = true;
    }
  }
  
// This shows the unsorted or sorted array
  showValues(userArray, arraySize, sortValue);
  
  cout << "\n\nWhat value do you want to search for in the array: ";
  cin >> userValue;
  
  cout << "\n\nA linear search is useful for small arrays, since the array can be in any order and has an easily understandable algorithm\n";
  cout << "However, it can be slow for large arrays\n";
  cout << "A binary search is useful for large arrays, since it splits the array down the middle and compares the middle element\n";
  cout << "However, it requires the array to be sorted first\n";
  
// This loop ensures the user enters 1 or 2 for the search selection
  while (!validSearch) {
    cout << "\nType 1 or 2 to choose between a 1 - Linear or a 2 - Binary search: ";
    cin >> searchValue;

// The array is searched via a linear search
    if (searchValue == 1) {
      arrayIndex = linearArraySearch(userArray, userValue, arraySize);
      validSearch = true;
    }
// The array is searched via a binary search
    else if (searchValue == 2) {
      arrayIndex = binaryArraySearch(userArray, userValue, arraySize);  
      validSearch = true;
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

// This function sorts the user's array using a selection sort
void arraySelectionSort(int arraySort[], int arraySize) {
  int minIndex = 0, minValue = 0;
  
  arraySize -= 1;
  
  for (int i = 0; i < arraySize; ++i) {
    minIndex = i;
    minValue = arraySort[i];
    for (int index = (i + 1); index < (arraySize + 1); ++index) {
      if (arraySort[index] < minValue) {
        minValue = arraySort[index];
        minIndex = index;
      }
    }
  // The 2 array elements are swapped
    swap(arraySort[minIndex], arraySort[i]);
  }
}

// This function sorts the user's array using a bubble sort
void arrayBubbleSort(int arraySort[], int arraySize) {
  arraySize -= 1;
  
  for (int i = arraySize; i > 0; i--) {
    for (int index = 0; index < i; ++index) {      
    // The 2 array elements are swapped if the current element is greater than the next element
      if (arraySort[index] > arraySort[(index + 1)]) {
        swap(arraySort[index], arraySort[(index + 1)]);
      }
    }
  }
}

// This function swaps 2 different array elements
void swap(int &a, int &b) {
  int tempIndex = a;
  a = b;
  b = tempIndex;
}

// This function outputs the user's array
void showValues(int array[], int arraySize, int sorted) {
  if (sorted == 0) {
    cout << "\nUnsorted Array: ";
  }
  else {
    cout << "\nSorted Array: ";
  }
  for (int i = 0; i < arraySize; ++i) {
    cout << array[i] << " ";
  }
}

// This function searches the user's array using a linear search
int linearArraySearch(int arraySearch[], int userValue, int arraySize) {
  int index = 0, position = -1;
  bool foundValue = false;
  
// This loops until the value is found, comparing each different array element
  while (index < arraySize && !foundValue) {
    if (arraySearch[index] == userValue) {
      position = index;
      foundValue = true;
    }
    ++index;
  }
  return position;
}

// This function searches the user's array using a binary search
int binaryArraySearch(int arraySearch[], int userValue, int arraySize) {
  int firstIndex = 0, middleIndex, lastIndex,  position = -1;
  bool foundValue = false;
  
// This loops until the value is found, comparing the middle array element, splitting the array in half each time 
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
