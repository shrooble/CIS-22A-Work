/*
  Victor Li
  Chapter 5: 18 - Population Bar Chart
  This program 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string text;
  
  ifstream file("People.txt");
int year = 1900;
  for (int i = 0; i < 7; ++i, year + 20) {
    cout << "Year: " << year << endl;
    getline(file, text);
    cout << "people: " << text << endl;
    cout << "Pointer: " << file.tellg() << endl;
  }
  
  
  getline(file, text);
  
  cout << text;


  file.close();
  
  return 0;
}
