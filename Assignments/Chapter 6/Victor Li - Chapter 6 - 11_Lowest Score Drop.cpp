/* 
  Victor Li
  Chapter 6: 11 - Lowest Score Drop
  This program drops the lowest score out of 5 test scores and outputs the average of the top 4 highest scores
*/

#include <iostream>

using namespace std;

const int ARRAY_SIZE = 5;

void getScore(int (&array)[ARRAY_SIZE]);
void calcAverage(int (&array)[ARRAY_SIZE]);
int findLowest(int array[ARRAY_SIZE]);

int main() {
  int testScores[ARRAY_SIZE] = {-1, -1, -1, -1, -1};

// Functions calls passing testScores array as an arguemnt
  getScore(testScores);
  calcAverage(testScores);

  return 0;
}

// This function asks the user for the 5 test scores
void getScore(int (&array)[ARRAY_SIZE]) {
  for (int i = 0; i < ARRAY_SIZE; ++i) {
  // This while loop makes sure the user inputs a value higher than 0, but lower than 100
    while (array[i] < 0 || array[i] > 100) {  
      cout << "\nWhat is score #" << (i + 1) << "?\n";
      cin >> array[i];
    }
  }
}

// This function gets the sum of each test score and outputs the average of the top 4 highest scores
void calcAverage(int (&array)[ARRAY_SIZE]) {
  int arraySum = 0;
  double arrayAverage = 0.0;

// This gets the sum of the array (the test scores)
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    arraySum += array[i];
  }

// This finds the average top 4 test scores by subtracting the lowest score from the sum and dividing the whole thing by 4
  arrayAverage = (arraySum - findLowest(array)) / 4;

  cout << "\nThe average of the four highest test scores are: " << arrayAverage << endl; 
}

// This function returns the lowest test score to be subtracted in calcAverage()
int findLowest(int array[ARRAY_SIZE]) {
  int lowest = array[0];
  
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    if (lowest > array[i]) {
      lowest = array[i];
    }
  }
  
  return lowest;
}
