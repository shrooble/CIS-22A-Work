/*
  Victor Li
  Chapter 5: 18 - Population Bar Chart
  This program outputs the year and the population growth with * representing 1000 people
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int text = 0, year = 1900;

// This opens the "People.txt" file under the name of "file"
  ifstream file("People.txt");

// This only occurs if the People.txt file isn't downloaded
  if (!file) {
    cout << "People.txt file not located\n";
  }
  else {
    cout << "Each * represents 1000 people\n";
    
    for (int i = 0; i < 7; ++i) {
      cout << "\nYear: " << year << endl;
      file >> text;
      text /= 1000;
      cout << "people: ";
      
      for (int i = 0; i < text; ++i) {
          cout << "*";
      }
      
      cout << endl;
      year += 20;
    }
    
  file.close();
  }
  
  return 0;
}

/*
For reference the People.txt file contains:
  2000
  4000
  5000
  9000
  14000
  18000
  18000
*/
