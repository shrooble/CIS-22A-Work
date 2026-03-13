/* 
  Victor Li
  Chapter 6: 11 - Lowest Score Drop

*/

#include <iostream>

using namespace std;

const int ARRAY_SIZE = 5;

void getScore(int&);
void calcAverage(int&);
int findLowest(int);

int main() {
  int testScores[ARRAY_SIZE];
  
  getScore(testScores);
  calcAverage(testScores);
  
  return 0;
}

void getScore(int& array[ARRAY_SIZE]) {
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    while (array[i] < 0 || array[i] > 100) {  
      cout << "\nWhat is score #" << (i + 1) << "?\n";
      cin >> array[i];
    }
  }
}

void calcAverage(int& array[ARRAY_SIZE]) {
  int count, arraySum;

  for (int i = 0; i < ARRAY_SIZE; ++i) {
    arraySum += array[i];
    ++count;
  }

  arraySum = (arraySum - findLowest(array)) / 4;

  cout << "The average of the four highest test scores are: " << arraySum << endl; 
}

int findLowest(int array[ARRAY_SIZE]) {
  int count, lowest;

  lowest = array[0];
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    if  (lowest > array[i]) {
      lowest = array[i];
    }
    ++count;
  }
  
  return lowest;
}
