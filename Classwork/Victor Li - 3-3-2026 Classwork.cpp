/*
  Victor Li
  3/3/2026 Classwork
  Practice for Static Local Variables, Reference Variables
*/

#include <iostream>

using namespace std;

void showStatic();
void displayStars(int = 1, int = 1);
void doubleNum (int&);
void calc(int& , int&);

int main() {
  int stars = 10, rows = 1, value = 5;

// This shows how a static variable defined locally in showStatic() doesn't initialize everytime
  for (int i = 0; i < 11; ++i) {
    showStatic();
  }
  cout << endl;
  
// This is practice for arguments for functions in main()
  cout << "Function argument practice:\n";
  for (int i = 0; i < 20; ++i) {
    displayStars(stars, rows);
    stars--;
    rows++;
    cout << endl;
    if (stars < 0) {
      break;
    }
  }
  cout << "Rows: " << rows << endl;
  
  
/*
  This shows how a function in main() can be void and return a value without returning anything, by using reference variables
  "Forwards" value to doubleNum(), then passes it back to main()
  & means pass by reference, else no & means pass by value
*/
  cout << "\nReference Variable Practice: " << value << endl;
  doubleNum(value);
  cout << "doubleNum() called again: " << value << endl;
  doubleNum(value);
  cout << "doubleNum() called again: " << value << endl;
  doubleNum(value);
  cout << "doubleNum() called again: " << value << endl;
  doubleNum(value);
  cout << "doubleNum() called again: " << value << endl << endl;
  
// More pass by value vs. reference practice
  int x = 1;
  int y = 2;
  int z = 3;
  calc(x, y);
  cout << x << " " << y << " " << z << endl;
  
  return 0;
}

void showStatic() {
// This is initialized only once
  static int number;
  cout << "Static Output: " << number << endl;
  number+= 1;
}

void displayStars(int columns, int rows) {
// Parameters are defined above in ()
  for (int i = 0; i < columns; ++i) {
    cout << "*";
  }
}

void doubleNum(int &integer) {
// This returns the reference variable (integer) in the void function
  integer *= 2;
}

void calc(int& a, int& b) {
// The parameters are passed by reference
  int c;
  c = a + 2;
  a = a * 3;
  b = c + a;
}
