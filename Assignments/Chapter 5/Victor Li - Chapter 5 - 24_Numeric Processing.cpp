/*
  Victor Li
  Chapter 5: 24 - Numeric Processing
  This program calculates the amount, the sum, and the average of the numbers in the Random.txt file
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int value = 0, valueSum = 0, valueAverage = 0, valueCounter = 0;
  bool endFile = true;
  
  // This opens the Random.txt file in read mode
  ifstream file("Random.txt");
  
  // This only occurs if the Random.txt file isn't found
  if (!file) {
    cout << "Random.txt file not located\n";
  }
  else {
  // This loops until the file pointer (found using file.tellg()) is at -1 (end of the file)
    while (endFile) {
      file >> value;
    // This checks if the file pointer is at -1
      if (file.tellg() == -1) {
        endFile = false;
        break;
      }
        cout << "Number: " << value << endl;
      // This adds the number into the valueSum variable and adds 1 to the valueCounter variable
        valueSum += value;
        ++valueCounter;
    }
    
  // This calculates the average of the numbers by the quotient of the sum and the number count
    valueAverage = valueSum / valueCounter;
    
    cout << "\nAmount of Numbers: " << valueCounter << endl;
    cout << "Sum of the Numbers: " << valueSum << endl;
    cout << "Average of the Numbers: " << valueAverage << endl;
    
    file.close();
  }
  
    return 0;
  }
